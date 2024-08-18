/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "playerBoard.hpp"

namespace fleetBattle
{
    playerBoard::playerBoard(std::vector<ShipPosition> ships)
    {
        std::swap(makeBoardFromShipsList(ships,this->_board));
    };
    playerBoard::playerBoard()
    {
        for(int row: {0,1,2,3,4,5,6,7,8,9})
        {
            this->_board.push_back(ColumnType());
            for(int column: {0,1,2,3,4,5,6,7,8,9})
                this->_board.at(row).push_back(SquareStatus::WATER);
        }
    }
}