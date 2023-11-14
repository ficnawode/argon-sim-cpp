cmake_minimum_required(VERSION 3.23)

project(your_project_name_here C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

find_package(Boost 1.78 REQUIRED COMPONENTS json)


add_subdirectory(exec)