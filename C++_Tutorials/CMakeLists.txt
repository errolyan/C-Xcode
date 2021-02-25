cmake_minimum_required(VERSION 3.9)
project(SDLDemo)

set(CMAKE_CXX_STANDARD 11)

add_executable(SDLDemo main.cpp)

target_link_libraries(SDLDemo SDL pthread)
