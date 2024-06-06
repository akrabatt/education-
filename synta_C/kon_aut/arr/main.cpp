#include <stdio.h>

// Определение возможных состояний
typedef enum
{
    STATE_CLOSED,
    STATE_OPENING,
    STATE_OPENED,
    STATE_CLOSING,
    NUM_STATES
} State;

// Определение возможных событий
typedef enum
{
    EVENT_OPEN_BUTTON_PRESSED,
    EVENT_CLOSE_BUTTON_PRESSED,
    EVENT_TIMER_EXPIRED,
    NUM_EVENTS
} Event;

// Определение типа функции-указателя для обработки состояния
typedef void (*StateHandler)(void);

// Объявление массивов для обработки переходов и состояний
State stateTable[NUM_STATES][NUM_EVENTS];
StateHandler stateHandlers[NUM_STATES];

// Обработка состояний
void handleClosed(void)
{
    printf("Door is Closed\n");
}

void handleOpening(void)
{
    printf("Door is Opening\n");
}

void handleOpened(void)
{
    printf("Door is Opened\n");
}

void handleClosing(void)
{
    printf("Door is Closing\n");
}

// Инициализация таблицы переходов состояний и обработчиков состояний
void initializeFSM(void)
{
    // Таблица переходов состояний
    stateTable[STATE_CLOSED][EVENT_OPEN_BUTTON_PRESSED] = STATE_OPENING;
    stateTable[STATE_CLOSED][EVENT_CLOSE_BUTTON_PRESSED] = STATE_CLOSED;
    stateTable[STATE_CLOSED][EVENT_TIMER_EXPIRED] = STATE_CLOSED;

    stateTable[STATE_OPENING][EVENT_OPEN_BUTTON_PRESSED] = STATE_OPENING;
    stateTable[STATE_OPENING][EVENT_CLOSE_BUTTON_PRESSED] = STATE_CLOSING;
    stateTable[STATE_OPENING][EVENT_TIMER_EXPIRED] = STATE_OPENED;

    stateTable[STATE_OPENED][EVENT_OPEN_BUTTON_PRESSED] = STATE_OPENED;
    stateTable[STATE_OPENED][EVENT_CLOSE_BUTTON_PRESSED] = STATE_CLOSING;
    stateTable[STATE_OPENED][EVENT_TIMER_EXPIRED] = STATE_OPENED;

    stateTable[STATE_CLOSING][EVENT_OPEN_BUTTON_PRESSED] = STATE_OPENING;
    stateTable[STATE_CLOSING][EVENT_CLOSE_BUTTON_PRESSED] = STATE_CLOSING;
    stateTable[STATE_CLOSING][EVENT_TIMER_EXPIRED] = STATE_CLOSED;

    // Таблица обработчиков состояний
    stateHandlers[STATE_CLOSED] = handleClosed;
    stateHandlers[STATE_OPENING] = handleOpening;
    stateHandlers[STATE_OPENED] = handleOpened;
    stateHandlers[STATE_CLOSING] = handleClosing;
}

// Объявление текущего состояния
State currentState = STATE_CLOSED;

// Функция для обработки событий
void handleEvent(Event event)
{
    State nextState = stateTable[currentState][event];
    if (nextState != currentState)
    {
        printf("Transitioning from %d to %d\n", currentState, nextState);
        currentState = nextState;
        stateHandlers[currentState]();
    }
    else
    {
        printf("Remaining in state %d\n", currentState);
    }
}

// Основная функция
int main()
{
    initializeFSM();

    handleEvent(EVENT_OPEN_BUTTON_PRESSED);
    handleEvent(EVENT_TIMER_EXPIRED);
    handleEvent(EVENT_CLOSE_BUTTON_PRESSED);
    handleEvent(EVENT_TIMER_EXPIRED);

    return 0;
}