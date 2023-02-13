#pragma once

#include <string>

#include "EnigmaComponent.h"

class Rotor : public EnigmaComponent {
private:
    char rotorNotch;

    void setRing(char firstLetter);

public:
    Rotor();
    
    Rotor(std::string wiring, char notch, char ringPosition);

    char getNotch();

    void rotate();
};
