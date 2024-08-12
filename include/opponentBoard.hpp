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
        virtual SquareType getSquareStatus(std::pair<int,int>)            override;
        virtual SquareType setSquareStatus(std::pair<int,int>,SquareType) override;
        virtual BoardType  getBoardStatus()                               override;
        ~opponentBoard();
    }
}