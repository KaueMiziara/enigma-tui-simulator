#pragma once

#include "../include/Constants.h"

class EnigmaComponent {
protected:
    std::string componentWiring;
    std::string componentAlphabet = ALPHABET;

public:
    virtual char passForward(char letter, EnigmaComponent *nextComponent);
    virtual char passBackward(char letter, EnigmaComponent *nextComponent);

    virtual std::string getWiring();
    virtual std::string getAlphabet();
};
