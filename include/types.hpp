/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef TYPES_HPP
#define TYPES_HPP

#include <map>
#include <vector>
#include <utility>
#include <string>

namespace fleetBattle
{
    enum SquareStatus { WATER='W',WATER_HIT='w',SHIP='S',SHIP_HIT='s' };

    using SquareType         = char;
    using ColumnType         = std::vector<SquareType>;
    using BoardType          = std::vector<ColumnType>;
    using DecodedCoordinates = std::pair<int,int>;
    using ShipPosition       = std::pair<DecodedCoordinates,DecodedCoordinates>;
    using Coordinates        = std::string;
}

#endif