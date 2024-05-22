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
    int getScore() const override;

private:
    bool running = false;
    int score = 0;
};

#endif
