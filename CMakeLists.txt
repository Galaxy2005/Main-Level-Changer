cmake_minimum_required(VERSION 3.21)
project(main-level-changer)

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "Unable to find Geode SDK! Please define GEODE_SDK environment variable to point to Geode")
else()
    message(STATUS "Found Geode: $ENV{GEODE_SDK}")
endif()

# Include the Geode SDK subdirectory
add_subdirectory($ENV{GEODE_SDK} ${CMAKE_CURRENT_BINARY_DIR}/geode)

# Set up your mod using Geode's macro
setup_geode_mod(${PROJECT_NAME})

# Add your source files here
target_sources(${PROJECT_NAME} PRIVATE
    src/main.cpp
)
