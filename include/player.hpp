/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "types.hpp"
#include "playerBoard.hpp"
#include "opponentBoard.hpp"

namespace fleetBattle
{
    class player
    {
        private:
        playerBoard   ownBoard;
        opponentBoard otherBoard;

        public:
        player(playerBoard);
        SquareType checkShoot(decodedCoordinates);
        BoardType  checkBoard();
        ~player();
    };
}

#endif