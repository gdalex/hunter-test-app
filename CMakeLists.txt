cmake_minimum_required(VERSION 3.13)

include("cmake/HunterGate.cmake")

HunterGate(
    URL "https://github.com/cpp-pm/hunter/archive/v0.24.18.tar.gz"
    SHA1 "1292e4d661e1770d6d6ca08c12c07cf34a0bf718"
    LOCAL
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include("cmake/toolchain/os-toolchain.cmake")

project(SimpleApp)

hunter_add_package(SimpleLibrary)

find_package(SimpleLibrary REQUIRED CONFIG)

add_executable(SimpleApp SimpleApp.cpp)

if (MSVC)
    set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT SimpleApp)
endif()

target_link_libraries(SimpleApp SimpleLibrary::SimpleLibrary odbc32 ole32 oleaut32 winspool odbccp32 uuid)
