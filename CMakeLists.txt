cmake_minimum_required(VERSION 3.7.0)
project(cppchallenge VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(chapter01/01)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

