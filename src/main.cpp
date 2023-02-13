#include <iostream>

#include "../include/Enigma.h"
#include "../include/Keyboard.h"
#include "../include/Plugboard.h"
#include "../include/Rotor.h"
#include "../include/Reflector.h"

int main(int argc, char **argv) {
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft = Rotor(ROTOR_I, 'Q', 'A');
    Rotor rotorMiddle = Rotor(ROTOR_II, 'E', 'A');
    Rotor rotorRight = Rotor(ROTOR_III, 'V', 'A');

    Reflector reflector = Reflector(REFLECTOR_A);

    Enigma enigma = Enigma(&keyboard, &plugboard,
        &rotorLeft, &rotorMiddle, &rotorRight,
        &reflector);

    std::cout << enigma.encipherText() << std::endl;
}
