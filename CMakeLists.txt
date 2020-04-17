cmake_minimum_required(VERSION 3.15)
project(PowerAnalyser)

set(CMAKE_CXX_STANDARD 14)

# Required if: 1) using macOS and 2) using Brew
set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.14.1/lib/cmake/")

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets REQUIRED)

add_executable(PowerAnalyser main.cpp Device.cpp Device.h Ui_MainWindow.h ViewMain.cpp ViewMain.h Subject.h Observer.h ModelMain.cpp ModelMain.h ControllerMain.cpp ControllerMain.h)

# Use the Widgets module from Qt 5.
target_link_libraries(PowerAnalyser Qt5::Widgets)