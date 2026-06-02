cmake_minimum_required(VERSION 3.16)

project(c_sensor_interface_pattern C)

set(CMAKE_C_STANDARD 99)

include_directories(include)

add_executable(sensor_interface_pattern_example
    examples/main.c
    src/sensor.c
)

add_executable(sensor_interface_pattern_test
    src/sensor.c
    tests/test_sensor.c
)
