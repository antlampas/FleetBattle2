#FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/

add_subdirectory(opponentBoard opponentBoard )
add_subdirectory(player        player        )
add_subdirectory(playerBoard   playerBoard   )
add_subdirectory(utilities     utilities     )

add_executable(fleetBattle2 main.cpp)

target_link_libraries(  fleetBattle2 PUBLIC
                        playerBoard
                        opponentBoard
                        player
                        utilities
                     )