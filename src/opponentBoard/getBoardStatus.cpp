/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "opponentBoard.hpp"

namespace fleetBattle
{
    inline BoardType opponentBoard::getBoardStatus()
    {
        return this->_board;
    }
}