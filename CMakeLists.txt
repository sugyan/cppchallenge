cmake_minimum_required(VERSION 3.7.0)
project(cppchallenge VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -fexceptions -g -Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")

include(CTest)
enable_testing()

add_subdirectory(chapter01/001)
add_subdirectory(chapter01/002)
add_subdirectory(chapter01/003)
add_subdirectory(chapter01/004)
add_subdirectory(chapter01/005)
add_subdirectory(chapter01/006)
add_subdirectory(chapter01/007)
add_subdirectory(chapter01/008)
add_subdirectory(chapter01/009)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
