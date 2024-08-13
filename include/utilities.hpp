/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

 #ifndef UTILITIES_HPP
 #define UTILITIES_HPP

#include <vector>
#include <utility>

namespace fleetBattle
{
    bool isVertical(DecodedCoordinates,DecodedCoordinates);
    bool isHorizontal(DecodedCoordinates,DecodedCoordinates);
    bool shipsOverlap(ShipPosition,ShipPosition);
    DecodedCoordinates decodeCoordinates(std::string);
}

 #endif