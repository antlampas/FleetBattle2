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
    enum SquareStatus : char { WATER='W',WATER_HIT='w',SHIP='S',SHIP_HIT='s' };

    using SquareType             = char;
    using ColumnType             = std::vector<SquareType>;
    using BoardType              = std::vector<ColumnType>;
    using DecodedCoordinatesType = std::pair<int,int>;
    using ShipPositionType       = std::pair<DecodedCoordinatesType,DecodedCoordinatesType>;
    using CoordinatesType        = std::string;
}

#endif