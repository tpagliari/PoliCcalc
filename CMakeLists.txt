cmake_minimum_required(VERSION 3.10)
project(Calculator)

set(CMAKE_C_STANDARD 11)

add_library(calculator src/calculator.c)

target_link_libraries(calculator m)

add_executable(test_calculator tests/test_calculator.c)

target_link_libraries(test_calculator calculator m)

add_executable(calculator_main src/main.c)

target_link_libraries(calculator_main calculator m)

enable_testing()

add_test(NAME CalculatorTest COMMAND test_calculator)
