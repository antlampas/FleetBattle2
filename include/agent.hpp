/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef AGENT_HPP
#define AGENT_HPP

#include "types.hpp"
#include "utilities.hpp"
#include "player.hpp"

#include <thread>
#include <mutex>
#include <future>
#include <string>

namespace fleetBattle
{
    class agent
    {
        private:
        std::string name;
        player      _player;
        
        private:
        std::stop_token stopToken;
        std::shared_ptr<std::mutex> mutex;
        std::shared_ptr<std::queue<std::string>> incomingQueue;
        std::shared_ptr<std::queue<std::string>> outgoingQueue;
        std::string incomingMessage;
        std::string outgoingMessage;

        public:
        agent(std::string,
              player,
              std::stop_token,
              std::shared_ptr<std::mutex>,
              std::shared_ptr<std::queue<std::string>>,
              std::shared_ptr<std::queue<std::string>>
              );
        void operator()();

        private:
        std::string readMessage();
        bool        writeMessage(std::string);
    };
}

#endif