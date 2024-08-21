/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "player.hpp"

namespace fleetBattle
{
    player::player(std::vector<ShipPositionType> deployedShips) : ownBoard{},otherBoard{}
    {
        for(auto ship: deployedShips)
        {
            for(int row=ship.first.first;row<=ship.second.first;row++)
                for(int column=ship.first.second;column<=ship.second.second;column++)
                    this->ownBoard.setSquareStatus(std::make_pair(row,column),SquareStatus::SHIP);
            this->deployedShips.push_back(ship);
        }
    }
    player::~player(){}
}