cmake_minimum_required(VERSION 3.21)
project(MainLevelChanger)

find_package(Geode REQUIRED)

add_geode_mod(MainLevelChanger
    src/main.cpp
)
