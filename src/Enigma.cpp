#include <string>
#include <iostream>

#include "../include/Enigma.h"
#include "../include/Constants.h"
#include "../include/Keyboard.h"
#include "../include/Plugboard.h"
#include "../include/Rotor.h"

char Enigma::encipher() {
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft = Rotor(ROTOR_I, 'Q');
    Rotor rotorMiddle = Rotor(ROTOR_II, 'E');
    Rotor rotorRight = Rotor(ROTOR_III, 'V');

    char letter = keyboard.takeInput();

    letter = plugboard.passForward(letter, &rotorRight);

    letter = rotorRight.passForward(letter, &rotorMiddle);
    letter = rotorMiddle.passForward(letter, &rotorLeft);


    // TODO:
    // take input and pass to plugboard +
    // pass letter from plugboard into rotors +
    // pass from rotors to the reflector
    // reflector -> rotors
    // rotors -> plugboard == output

    return letter;
}
