#include "../header/StrategyGame.hpp"
#include <iostream>

void StrategyGame::start()
{
    running = true;
    std::cout << "Starting Strategy Game..." << std::endl;
    std::cout << "Build your base, gather resources, and defeat your enemies!" << std::endl;
}

void StrategyGame::pause()
{
    if (running)
    {
        std::cout << "Pausing Strategy Game..." << std::endl;
        running = false;
    }
}

void StrategyGame::quit()
{
    std::cout << "Quitting Strategy Game..." << std::endl;
    running = false;
}

void StrategyGame::handleInput(const std::string& input)
{
    if (input == "build")
    {
        std::cout << "Building a structure..." << std::endl;
    }
    else if (input == "gather")
    {
        std::cout << "Gathering resources..." << std::endl;
    }
    else if (input == "attack")
    {
        std::cout << "Attacking enemy!" << std::endl;
    }
    else
    {
        std::cout << "Unknown command: " << input << std::endl;
    }
}
