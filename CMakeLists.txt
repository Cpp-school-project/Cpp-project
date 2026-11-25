cmake_minimum_required(VERSION 3.16)

project(AntWar VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Qt6 6.8 REQUIRED COMPONENTS Quick QuickControls2)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appAntWar
    src/main.cpp
    src/game/GameController.h
    src/game/GameController.cpp
)

qt_add_qml_module(appAntWar
    URI AntWar
    QML_FILES
        qml/Main.qml
)

target_include_directories(appAntWar PRIVATE src)

target_link_libraries(appAntWar PRIVATE
    Qt6::Quick
    Qt6::QuickControls2
)
