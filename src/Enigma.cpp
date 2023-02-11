#include <string>
#include <iostream>

#include "../include/Enigma.h"
#include "../include/Constants.h"
#include "../include/Keyboard.h"
#include "../include/Plugboard.h"
#include "../include/Rotor.h"
#include "../include/Reflector.h"

char Enigma::encipher() {
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft = Rotor(ROTOR_I, 'Q');
    Rotor rotorMiddle = Rotor(ROTOR_II, 'E');
    Rotor rotorRight = Rotor(ROTOR_III, 'V');

    Reflector reflector = Reflector(REFLECTOR_A);

    char letter = keyboard.takeInput();

    letter = plugboard.passForward(letter, &rotorRight);

    letter = rotorRight.passForward(letter, &rotorMiddle);
    letter = rotorMiddle.passForward(letter, &rotorLeft);

    letter = rotorLeft.passForward(letter, &reflector);
    letter = reflector.passForward(letter, &reflector);

    letter = reflector.passBackward(letter, &rotorLeft);

    letter = rotorLeft.passBackward(letter, &rotorMiddle);
    letter = rotorMiddle.passBackward(letter, &rotorRight);

    letter = rotorRight.passBackward(letter, &plugboard);

    letter = plugboard.passBackward(letter, &keyboard);

    // TODO:
    // take input and pass to plugboard +
    // pass letter from plugboard into rotors +
    // pass from rotors to the reflector +
    // reflector -> rotors +
    // rotors -> plugboard == output +

    return letter;
}
