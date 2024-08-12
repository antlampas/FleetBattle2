/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef PLAYERBOARD_HPP
#define PLAYERBOARD_HPP

#include "types.hpp"
#include "board.hpp"

namespace fleetBattle
{
    class playerBoard : public board
    {
        private:
        BoardType _board;
        BoardType shipsOverlay;

        public:
        playerBoard(BoardType);
        virtual BoardType  getBoardStatus()                                           override;
        virtual SquareType getSquareStatus(std::pair<int,int> coordinates)            override;
        virtual SquareType setSquareStatus(std::pair<int,int> coordinates,SquareType) override;
        ~playerBoard();
    };
}