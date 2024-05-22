#ifndef IJEU_HPP
#define IJEU_HPP

#include <string>

class IJeu
{
public:
    virtual ~IJeu() = default;

    virtual void start() = 0;
    virtual void pause() = 0;
    virtual void quit() = 0;
    virtual void handleInput(const std::string& input) = 0;
    virtual int getScore() const = 0;
};

#endif
