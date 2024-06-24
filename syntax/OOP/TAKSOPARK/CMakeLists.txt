cmake_minimum_required(VERSION 3.10)

# Название вашего проекта
project(TAKSOPARK)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Установка исходных файлов
set(SOURCES
    main.cpp
    funks.cpp
)

set(HEADERS
    class_Car.h
    class_Driver.h
    class_Engine.h
    class_Fleet.h
    class_IFleetManagment.h
    funks.h
)

# Добавление исполняемого файла
add_executable(TAKSOPARK ${SOURCES} ${HEADERS})

# Подключение заголовочных файлов
target_include_directories(TAKSOPARK PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
