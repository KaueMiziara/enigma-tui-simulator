#include <iostream>

#include "../include/Enigma.h"

// TODO:
// link rotors wiring to its notch
// add a way to change the plugboard from user input

int main(int argc, char **argv) {
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft =   Rotor('Q', 'A', 1);
    Rotor rotorMiddle = Rotor('E', 'A', 2);
    Rotor rotorRight =  Rotor('V', 'A', 3);

    Reflector reflector = Reflector('A');

    Enigma enigma = Enigma(&keyboard, &plugboard,
        &rotorLeft, &rotorMiddle, &rotorRight,
        &reflector);

    enigma.printSettings();

    std::cout << enigma.encipherText() << std::endl;
}
