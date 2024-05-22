#ifndef STRATEGYGAME_HPP
#define STRATEGYGAME_HPP

#include "IJeu.hpp"
#include <iostream>

class StrategyGame : public IJeu
{
public:
    void start() override;
    void pause() override;
    void quit() override;
    void handleInput(const std::string& input) override;

private:
    bool running = false;
};

#endif
