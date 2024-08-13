/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef OPPONENTBOARD_HPP
#define OPPONENTBOARD_HPP

#include "types.hpp"
#include "board.hpp"

namespace fleetBattle
{
    class opponentBoard : public board
    {
        private:
        BoardType _board;

        public:
        opponentBoard(BoardType);
        virtual SquareType getSquareStatus(DecodedCoordinates)            override;
        virtual SquareType setSquareStatus(DecodedCoordinates,SquareType) override;
        virtual BoardType  getBoardStatus()                               override;
        ~opponentBoard();
    }
}