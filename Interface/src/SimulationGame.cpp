#include "../header/SimulationGame.hpp"
#include <iostream>

void SimulationGame::start()
{
    running = true;
    std::cout << "Starting Simulation Game..." << std::endl;
    std::cout << "Manage your virtual world and keep your citizens happy!" << std::endl;
}

void SimulationGame::pause()
{
    if (running)
    {
        std::cout << "Pausing Simulation Game..." << std::endl;
        running = false;
    }
}

void SimulationGame::quit()
{
    std::cout << "Quitting Simulation Game..." << std::endl;
    running = false;
}

void SimulationGame::handleInput(const std::string& input)
{
    if (input == "build")
    {
        std::cout << "Constructing a new building..." << std::endl;
    }
    else if (input == "tax")
    {
        std::cout << "Collecting taxes from citizens..." << std::endl;
    }
    else if (input == "celebrate")
    {
        std::cout << "Hosting a celebration event!" << std::endl;
    }
    else
    {
        std::cout << "Unknown command: " << input << std::endl;
    }
}
