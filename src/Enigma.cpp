#include <cstddef>
#include <string>
#include <iostream>

#include "../include/Enigma.h"

// TODO:
// shift first rotor after each letter pressed +
// shift other rotors when passed through notch

char Enigma::encipherLetter(char letter) {
    letter = keyboard.passForward(letter, &plugboard);
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

    return letter;
}

std::string Enigma::encipherText() {
    std::string text = "";

    text += keyboard.takeInput();

    for (char &letter : text) {
        this->rotateRotors();
        
        letter = encipherLetter(letter);
    }

    return text;
}

void Enigma::rotateRotors() {
    if (rotorMiddle.getWiring()[0] == rotorMiddle.getNotch())
        rotorLeft.rotate();

    if (rotorRight.getWiring()[0] == rotorRight.getNotch())
        rotorMiddle.rotate();

    rotorRight.rotate();
}
