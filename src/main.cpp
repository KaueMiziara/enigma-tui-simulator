#include <iostream>

#include "../include/Constants.h"
#include "../include/Enigma.h"
#include "../include/Keyboard.h"
#include "../include/Plugboard.h"
#include "../include/Rotor.h"
#include "../include/Reflector.h"

int main(int argc, char **argv) {
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft = Rotor(ROTORS.at("I"), 'Q', 'A');
    Rotor rotorMiddle = Rotor(ROTORS.at("II"), 'E', 'A');
    Rotor rotorRight = Rotor(ROTORS.at("III"), 'V', 'A');

    Reflector reflector = Reflector(REFLECTORS.at("A"));

    Enigma enigma = Enigma(&keyboard, &plugboard,
        &rotorLeft, &rotorMiddle, &rotorRight,
        &reflector);

    std::cout << enigma.encipherText() << std::endl;
}
