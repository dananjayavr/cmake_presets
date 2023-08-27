cmake_minimum_required(VERSION 3.20)
project(use-cmake-presets)

add_executable(${PROJECT_NAME} main.cpp)

if(${ENABLE_LOGGING})
    message("Enable logging")
    target_compile_definitions(${PROJECT_NAME} PRIVATE ENABLE_LOGGING)
endif()