cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(SoftwareOccluder VERSION 0.1 LANGUAGES CXX)

include_directories(include)

add_library(CImg INTERFACE IMPORTED GLOBAL)
set_property(
    TARGET CImg 
    APPEND 
    PROPERTY
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_SOURCE_DIR}/CImg"
)

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(googletest)

add_subdirectory(soccl)
