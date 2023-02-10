cmake_minimum_required(VERSION 3.16)

project(enigma-cli)

set(SOURCES src/main.cpp src/Keyboard.cpp)

add_executable(enigma-cli ${SOURCES})
target_include_directories(enigma-cli PRIVATE include)
