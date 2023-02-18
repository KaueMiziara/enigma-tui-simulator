#include <iostream>

#include "../include/Enigma.h"

int main(int argc, char **argv) {
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft =   Rotor(1);
    Rotor rotorMiddle = Rotor(2);
    Rotor rotorRight =  Rotor(3);

    Reflector reflector = Reflector('A');

    Enigma enigma = Enigma(&keyboard, &plugboard,
        &rotorLeft, &rotorMiddle, &rotorRight,
        &reflector);

    enigma.printSettings();

    std::cout << enigma.encipherText() << std::endl;
}
