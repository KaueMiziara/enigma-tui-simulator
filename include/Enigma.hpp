#pragma once

#include "../include/Keyboard.hpp"
#include "../include/Plugboard.hpp"
#include "../include/Rotor.hpp"
#include "../include/Reflector.hpp"

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
