#include <string>
#include <iostream>

#include "../include/Enigma.h"

// TODO:
// menu to choose settings
// add more rotors and reflectors
// add a way to change the plugboard from user input
// a decent README

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
        if (isalpha(letter)) {
            this->rotateRotors();
            
            letter = encipherLetter(letter);
        }
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

Enigma::Enigma(Keyboard *keyboard, Plugboard *plugboard,
Rotor *rotorLeft,
Rotor *rotorMiddle,
Rotor *rotorRight,
Reflector *reflector
) {
    this->keyboard = *keyboard;
    this->plugboard = *plugboard;

    this->rotorLeft = *rotorLeft;
    this->rotorMiddle = *rotorMiddle;
    this->rotorRight = *rotorRight;

    this->reflector = *reflector;
}
