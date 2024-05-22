#ifndef COMBATGAME_HPP
#define COMBATGAME_HPP

#include "IJeu.hpp"
#include <iostream>

class CombatGame : public IJeu
{
public:
    void start() override;
    void pause() override;
    void quit() override;
    void handleInput(const std::string& input) override;

private:
    bool running = false;
};

#endif // COMBATGAME_HPP
