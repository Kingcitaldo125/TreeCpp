cmake_minimum_required(VERSION 3.16)

project(test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_library(tree STATIC ${CMAKE_SOURCE_DIR}/src/Tree.cpp)

target_include_directories(tree PRIVATE ${CMAKE_SOURCE_DIR}/include)

add_executable(out ${CMAKE_SOURCE_DIR}/src/main.cpp)

target_link_libraries(out PRIVATE tree)

target_include_directories(out PRIVATE ${CMAKE_SOURCE_DIR}/include)
