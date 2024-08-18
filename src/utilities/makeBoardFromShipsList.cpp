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
        for(int row: {0,1,2,3,4,5,6,7,8,9})
        {
            board.push_back(ColumnType());
            for(int column: {0,1,2,3,4,5,6,7,8,9})
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