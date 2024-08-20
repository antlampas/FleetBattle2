/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "opponentBoard.hpp"

namespace fleetBattle
{
    opponentBoard::opponentBoard()
    {
        for(int row: std::ranges::iota_view(0,10))
        {
            this->_board.push_back(ColumnType());
            for(int column: std::ranges::iota_view(0,10))
                this->_board.at(row).push_back(SquareStatus::WATER);
        }
    }
}