cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(enigma-tui)

set(SOURCES
    src/main.cpp
    src/Keyboard.cpp
    src/Plugboard.cpp
    src/Rotor.cpp
    src/Reflector.cpp
    src/EnigmaComponent.cpp
    src/Enigma.cpp)

add_executable(enigma-tui ${SOURCES})
target_include_directories(enigma-tui PRIVATE include)
