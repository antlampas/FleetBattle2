/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "playerBoard.cpp"

namespace fleetBattle
{
    SquareType playerBoard::setSquareStatus(std::pair<int,int> coordinates,SquareType value)
    {
        this->_board.at(coordinates.first).at(coordinates.second) = value;
        return this->_board.at(coordinates.first).at(coordinates.second);
    }
}