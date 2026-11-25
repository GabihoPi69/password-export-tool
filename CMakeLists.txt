cmake_minimum_required(VERSION 3.16)
project(password-export-tool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(passwordexporttool
    src/main.cpp
    src/readers.cpp
    src/merge.cpp
    src/encrypt.cpp
)

target_include_directories(passwordexporttool PRIVATE include)

if(WIN32)
    target_link_libraries(passwordexporttool PRIVATE userenv)
endif()
