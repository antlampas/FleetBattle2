/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef AGENT_HPP
#define AGENT_HPP

#include "types.hpp"
#include "utilities.hpp"
#include "agent.hpp"

namespace fleetBattle
{
    class matchMaster
    {
        public:
        matchMaster(std::stop_token);
        void operator()();
        
        private:
        agent                   agentA;
        agent                   agentB;

        //Threads management
        private:
        std::condition_variable cv;
        std::mutex              mutex;
        std::stop_source        stopSourceA;
        std::stop_source        stopSourceB;
        std::stop_token         stopToken;
        char                    playerInTurn;
    };
}