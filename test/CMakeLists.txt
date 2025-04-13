cmake_minimum_required(VERSION 3.31)

set(myTests modern_C_tests)

include(FetchContent)
FetchContent_Declare(
    googleTest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG main
)
FetchContent_MakeAvailable(googleTest)

add_executable(${myTests} tests.c)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(${myTests} PUBLIC gtest_main Functions)

add_test(NAME ${myTests} COMMAND ${myTests})
