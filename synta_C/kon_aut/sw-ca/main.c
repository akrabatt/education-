#include <stdio.h>

// Определение возможных состояний
typedef enum
{
    STATE_CLOSED,
    STATE_OPENING,
    STATE_OPENED,
    STATE_CLOSING
} State;

// Определение возможных событий
typedef enum
{
    EVENT_OPEN_BUTTON_PRESSED,
    EVENT_CLOSE_BUTTON_PRESSED,
    EVENT_TIMER_EXPIRED
} Event;

// Структура конечного автомата
typedef struct
{
    State currentState; // Текущее состояние автомата
} FSM;

// Функции состояний
void handleStateClosed(FSM *fsm, Event event)
{
    if (event == EVENT_OPEN_BUTTON_PRESSED)
    {
        printf("Transitioning from CLOSED to OPENING\n");
        fsm->currentState = STATE_OPENING;
    }
}

void handleStateOpening(FSM *fsm, Event event)
{
    if (event == EVENT_TIMER_EXPIRED)
    {
        printf("Transitioning from OPENING to OPENED\n");
        fsm->currentState = STATE_OPENED;
    }
}

void handleStateOpened(FSM *fsm, Event event)
{
    if (event == EVENT_CLOSE_BUTTON_PRESSED)
    {
        printf("Transitioning from OPENED to CLOSING\n");
        fsm->currentState = STATE_CLOSING;
    }
}

void handleStateClosing(FSM *fsm, Event event)
{
    if (event == EVENT_TIMER_EXPIRED)
    {
        printf("Transitioning from CLOSING to CLOSED\n");
        fsm->currentState = STATE_CLOSED;
    }
}

// Инициализация конечного автомата
void initializeFSM(FSM *fsm)
{
    fsm->currentState = STATE_CLOSED;
}

// Обработка событий
void handleEvent(FSM *fsm, Event event)
{
    switch (fsm->currentState)
    {
    case STATE_CLOSED:
        handleStateClosed(fsm, event);
        break;
    case STATE_OPENING:
        handleStateOpening(fsm, event);
        break;
    case STATE_OPENED:
        handleStateOpened(fsm, event);
        break;
    case STATE_CLOSING:
        handleStateClosing(fsm, event);
        break;
    }
}

// Основная функция
int main()
{
    FSM fsm;
    initializeFSM(&fsm);

    handleEvent(&fsm, EVENT_OPEN_BUTTON_PRESSED);
    handleEvent(&fsm, EVENT_TIMER_EXPIRED);
    handleEvent(&fsm, EVENT_CLOSE_BUTTON_PRESSED);
    handleEvent(&fsm, EVENT_TIMER_EXPIRED);

    return 0;
}
