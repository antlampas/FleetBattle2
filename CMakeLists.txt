#FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/

cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 20)

project("Fleet Battle 2"
        VERSION "${VERSION}"
        DESCRIPTION "Yet another fleet battle implementation for excercise purposes"
        HOMEPAGE_URL "https://github.com/antlampas/FleetBattle2"
        LANGUAGES "CXX"
)

include_directories(include)

add_subdirectory(src ${CMAKE_BUILD_TYPE})