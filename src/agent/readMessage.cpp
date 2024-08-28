/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "agent.hpp"

namespace fleetBattle
{
    std::string agent::readMessage(bool queue)
    {
        //Queue "True": client queue
        //Queue "False": internal queue
        if(queue)
        {
            std::scoped_lock lock(*this->controllerMutex);
            if(!this->controllerIncomingQueue->empty())
            {
                std::string message = this->controllerIncomingQueue->front();
                this->controllerIncomingQueue->pop();
                return message;
            }
            else
            {
                return " ";
            }
        }
        else
        {
            std::scoped_lock lock(*this->internalMutex);
            if(!this->internalIncomingQueue->empty())
            {
                std::string message = this->internalIncomingQueue->front();
                this->internalIncomingQueue->pop();
                return message;
            }
            else
            {
                return " ";
            }
        }
    }
}