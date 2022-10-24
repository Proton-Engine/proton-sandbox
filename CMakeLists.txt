cmake_minimum_required(VERSION 3.16)

project(ProtonSandbox)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(libs/ProtonEngine)

add_executable(ProtonSandbox
        src/entrypoint.cpp
        src/application.cpp)

target_include_directories(ProtonSandbox PRIVATE include)
target_link_libraries(ProtonSandbox PRIVATE ProtonEngine)