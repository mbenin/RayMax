cmake_minimum_required(VERSION 3.29)
project(max_game_framework)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(${CMAKE_SOURCE_DIR}/include)
file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/src/*.cpp)

add_executable(max_game_framework ${SOURCES} main.cpp)
target_link_libraries(${PROJECT_NAME} raylib)
