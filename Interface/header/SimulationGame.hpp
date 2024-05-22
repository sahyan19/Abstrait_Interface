#ifndef SIMULATIONGAME_HPP
#define SIMULATIONGAME_HPP

#include "IJeu.hpp"
#include <iostream>

class SimulationGame : public IJeu
{
public:
    void start() override;
    void pause() override;
    void quit() override;
    void handleInput(const std::string& input) override;

private:
    bool running = false;
};

#endif // SIMULATIONGAME_HPP
