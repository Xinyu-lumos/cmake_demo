cmake_minimum_required(VERSION 3.28.4)
project(test)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)

add_executable(test ${SRC_LIST})