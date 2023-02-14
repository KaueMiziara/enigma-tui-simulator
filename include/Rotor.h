#pragma once

#include "EnigmaComponent.h"

class Rotor : public EnigmaComponent {
private:
    char rotorNotch;

    void setRing(char firstLetter);

    std::string wiringInput();

public:
    Rotor();
    
    Rotor(char notch, char ringPosition, int n);

    char getNotch();

    void rotate();
};
