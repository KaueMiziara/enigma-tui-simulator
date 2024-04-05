#pragma once

#include "../include/Keyboard.h"
#include "../include/Plugboard.h"
#include "../include/Rotor.h"
#include "../include/Reflector.h"

class Enigma
{
private:
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft;
    Rotor rotorMiddle;
    Rotor rotorRight;

    Reflector reflector;

    char encipherLetter(char letter);

    void rotateRotors();

public:
    Enigma(
        Keyboard* keyboard, Plugboard *plugboard,
        Rotor* rotorLeft,
        Rotor* rotorMiddle,
        Rotor* rotorRight,
        Reflector* reflector
    );

    std::string encipherText();
    
    void printSettings();
};
