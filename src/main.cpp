#include <iostream>

#include "../include/Enigma.h"

// TODO:
// add a way to change the plugboard from user input
// ^- plugboard file

int main(int argc, char **argv) {
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft =   Rotor('A', 1);
    Rotor rotorMiddle = Rotor('A', 2);
    Rotor rotorRight =  Rotor('A', 3);

    Reflector reflector = Reflector('A');

    Enigma enigma = Enigma(&keyboard, &plugboard,
        &rotorLeft, &rotorMiddle, &rotorRight,
        &reflector);

    enigma.printSettings();

    std::cout << enigma.encipherText() << std::endl;
}
