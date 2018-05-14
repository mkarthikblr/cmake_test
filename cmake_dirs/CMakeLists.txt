cmake_minimum_required(VERSION 3.5.1)
project(dirs)

include_directories(include)
set(SOURCEY src/main.cc src/test.cc)
add_executable(cmake_dirtest ${SOURCEY})
