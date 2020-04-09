cmake_minimum_required(VERSION 3.15)
project(PowerAnalyser)

set(CMAKE_CXX_STANDARD 14)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets REQUIRED)

add_executable(PowerAnalyser main.cpp Device.cpp Device.h MainWindow.h)

# Use the Widgets module from Qt 5.
target_link_libraries(PowerAnalyser Qt5::Widgets)