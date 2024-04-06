#pragma once

#include "../include/Constants.hpp"

class EnigmaComponent
{
protected:
    std::string componentWiring;
    std::string componentAlphabet = ALPHABET;

public:
    virtual char passForward(char letter, EnigmaComponent* const nextComponent);
    virtual char passBackward(char letter, EnigmaComponent* const nextComponent);

    virtual std::string getWiring();
    virtual std::string getAlphabet();
};
