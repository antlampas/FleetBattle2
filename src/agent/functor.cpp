/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "agent.hpp"

#include <chrono>

namespace fleetBattle
{
    void agent::operator()()
    {
        while(!this->stopToken.stop_requested())
        {
            std::string message = this->readMessage();
            
            std::vector<std::string> messageTokens;

            if(!this->incomingQueue->empty())
            {
                messageTokens = tokenizeMessage(this->readMessage());

                if(messageTokens.at(0) == "shoot")
                {
                    DecodedCoordinates coordinates = decodeCoordinates(messageTokens.at(1));
                    if(coordinates != std::pair<int,int>(-1,-1))
                    {
                        SquareType shootStatus = this->_player.checkShoot(coordinates);
                        this->writeMessage(this->name + " square status " + shootStatus);
                    }
                }
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
    }
}