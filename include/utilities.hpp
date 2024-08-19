/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include "types.hpp"

#include <vector>
#include <utility>

namespace fleetBattle
{
    bool isVertical(ShipPosition);
    bool isHorizontal(ShipPosition);
    bool shipsOverlap(ShipPosition,ShipPosition);
    DecodedCoordinates decodeCoordinates(Coordinates);
    BoardType makeBoardFromShipsList(std::vector<ShipPosition>);
    std::vector<std::string> tokenizeMessage(std::string);
}

#endif