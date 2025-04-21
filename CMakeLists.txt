cmake_minimum_required(VERSION 4.0)

set (This modern_c)
project(
    ${This}
    VERSION 0.1
    LANGUAGES C
)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

#include(CTest)

add_library(Functions  STATIC lib/fxns.c)
target_include_directories(Functions PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#add_subdirectory(test)

add_executable(${This} src/main.c)
target_link_libraries(${This} PRIVATE Functions)
