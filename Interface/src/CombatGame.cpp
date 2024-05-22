#include "../header/CombatGame.hpp"
#include <iostream>

void CombatGame::start()
{
    running = true;
    std::cout << "Starting Combat Game..." << std::endl;
    std::cout << "Fight your opponent and win the match!" << std::endl;
}

void CombatGame::pause()
{
    if (running)
    {
        std::cout << "Pausing Combat Game..." << std::endl;
        running = false;
    }
}

void CombatGame::quit()
{
    std::cout << "Quitting Combat Game..." << std::endl;
    running = false;
}

void CombatGame::handleInput(const std::string& input)
{
    if (input == "punch")
    {
        std::cout << "Throwing a punch!" << std::endl;
    }
    else if (input == "kick")
    {
        std::cout << "Kicking the opponent!" << std::endl;
    }
    else if (input == "block")
    {
        std::cout << "Blocking incoming attack!" << std::endl;
    }
    else
    {
        std::cout << "Unknown command: " << input << std::endl;
    }
}
