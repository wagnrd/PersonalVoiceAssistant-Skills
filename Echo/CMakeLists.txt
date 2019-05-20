cmake_minimum_required(VERSION 3.14)
project(echo_skill C CXX)

set(CMAKE_CXX_STANDARD 17)

# Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# find Qt package
find_package(Qt5Core REQUIRED)

add_library(echo SHARED Skill.hpp SkillAPI.hpp Echo.hpp Echo.cpp)

qt5_use_modules(echo Core)