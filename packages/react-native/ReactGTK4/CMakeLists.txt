cmake_minimum_required(VERSION 3.16)
project(react-native-gtk4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED gtk4)

add_executable(react-native-gtk4
    main.cpp
    GTK4.cpp
)

target_include_directories(react-native-gtk4 PRIVATE
    ${GTK4_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(react-native-gtk4 PRIVATE ${GTK4_LIBRARIES})
target_compile_options(react-native-gtk4 PRIVATE ${GTK4_CFLAGS_OTHER})
