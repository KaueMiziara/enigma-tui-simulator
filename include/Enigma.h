#pragma once

#include <string>

#include "../include/Constants.h"
#include "../include/Keyboard.h"
#include "../include/Plugboard.h"
#include "../include/Rotor.h"
#include "../include/Reflector.h"

class Enigma {
private:
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft = Rotor(ROTOR_I, 'Q');
    Rotor rotorMiddle = Rotor(ROTOR_II, 'E');
    Rotor rotorRight = Rotor(ROTOR_III, 'V');

    Reflector reflector = Reflector(REFLECTOR_A);

    char encipherLetter(char letter);

    void rotateRotors(char letter);

public:
    std::string encipherText();
};
