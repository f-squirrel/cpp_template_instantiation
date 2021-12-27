cmake_minimum_required(VERSION 3.10.2)

project(a.out)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Remove for compiler-specific features
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_VERBOSE_MAKEFILE OFF)

string(APPEND CMAKE_CXX_FLAGS " -Wall")
string(APPEND CMAKE_CXX_FLAGS " -Wbuiltin-macro-redefined")
string(APPEND CMAKE_CXX_FLAGS " -pedantic")
string(APPEND CMAKE_CXX_FLAGS " -Werror")
#string(APPEND CMAKE_CXX_FLAGS " -ftime-trace")

# clangd completion
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(${CMAKE_SOURCE_DIR})
file(GLOB SOURCES "${CMAKE_SOURCE_DIR}/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
set(USE_EXTERN "0" CACHE STRING "Instantiation type [0:2]")
target_compile_definitions(${PROJECT_NAME} PUBLIC USE_EXTERN=${USE_EXTERN})

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND "../scripts/nm.sh" "${USE_EXTERN}"
    COMMENT "Generate nm reports")
