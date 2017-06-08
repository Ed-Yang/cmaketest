cmake_minimum_required(VERSION 3.0.2)

project(tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_DEFAULT_STARTUP_PROJECT cmaketest)

include_directories("../op")

# vscode cmake tools (necessary only in old version ??)
 include(CMakeToolsHelpers OPTIONAL)

add_executable(cmaketest ./cmaketest.cpp)
target_link_libraries(cmaketest op)

# CTest
add_test(addition-test cmaketest)
