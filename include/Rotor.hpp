#pragma once

#include "EnigmaComponent.hpp"

class Rotor : public EnigmaComponent
{
private:
    char rotorNotch;

    char ringPosition;

    void setRing();

    std::string wiringInput();

public:
    Rotor();
    
    Rotor(int n);

    char getNotch();

    void rotate();
};
