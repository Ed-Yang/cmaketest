cmake_minimum_required(VERSION 3.0.2)

project(cmaketest)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_DEFAULT_STARTUP_PROJECT cmaketest)

include_directories("./op")

enable_testing()

# vscode cmake tools (necessary only in old version ??)
include(CMakeToolsHelpers OPTIONAL)

add_subdirectory(op)
add_subdirectory(tests)


