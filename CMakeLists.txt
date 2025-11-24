cmake_minimum_required(VERSION 3.16)
project(untitled3)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/qt/6.9.3/lib/cmake")

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_executable(untitled3 main.cpp
        main.h)

target_link_libraries(untitled3 Qt6::Widgets)

target_include_directories(untitled3 PRIVATE ${Qt6Widgets_INCLUDE_DIRS})