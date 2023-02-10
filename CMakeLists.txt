cmake_minimum_required(VERSION 3.16)

project(enigma-cli)
set(APP_NAME $(PROJECT_NAME))

add_executable($(APP_NAME) src/main.cpp)
