cmake_minimum_required(VERSION 3.0.2)

project(op)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# vscode cmake tools (necessary only in old version ??)
include(CMakeToolsHelpers OPTIONAL)

add_library(op STATIC ./op.cpp)



