/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "utilities.hpp"

namespace fleetBattle
{
    BoardType makeBoardFromShipsList(std::vector<ShipPosition> ships)
    {
        BoardType board {};
        for(int row: std::ranges::iota_view(0,10))
        {
            board.push_back(ColumnType());
            for(int column: std::ranges::iota_view(0,10))
                board.at(row).push_back(SquareStatus::WATER);
        }

        for(auto ship: ships)
        {
            for(int row=ship.first.first;row<=ship.second.first;row++)
                for(int column=ship.first.second;column<=ship.second.second;column++)
                    board.at(row).at(column) = SquareStatus::SHIP;
        }

        return board;
    }
}