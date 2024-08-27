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
        
        //Internal interface
        private:
        std::stop_token                          stopToken;
        std::shared_ptr<std::condition_variable> turn;
        std::shared_ptr<std::mutex>              internalMutex;
        std::shared_ptr<std::queue<std::string>> internalIncomingQueue;
        std::shared_ptr<std::queue<std::string>> internalOutgoingQueue;
        std::string                              internalIncomingMessage;
        std::string                              internalOutgoingMessage;

        //Interface to client
        private:
        std::shared_ptr<std::mutex>              controllerMutex;
        std::shared_ptr<std::queue<std::string>> controllerIncomingQueue;
        std::shared_ptr<std::queue<std::string>> controllerOutgoingQueue;
        std::string                              controllerCncomingMessage;
        std::string                              controllerOutgoingMessage;

        public:
        agent() = delete;
        agent(std::string,
              player,
              std::stop_token,
              std::shared_ptr<std::mutex>,
              std::shared_ptr<std::queue<std::string>>,
              std::shared_ptr<std::queue<std::string>>,
              std::shared_ptr<std::mutex>,
              std::shared_ptr<std::queue<std::string>>,
              std::shared_ptr<std::queue<std::string>>
              );
        void operator()();

        private:
        std::string readMessage(bool);
        bool        writeMessage(bool,std::string);
    };
}

#endif