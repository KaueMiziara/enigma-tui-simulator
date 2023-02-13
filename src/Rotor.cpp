#include <string>

#include "../include/Constants.h"
#include "../include/Rotor.h"

Rotor::Rotor() {
    this->componentWiring = ALPHABET;
    this->rotorNotch = 'A';
}

Rotor::Rotor(std::string wiring, char notch, char ringPosition) {
    this->componentWiring = wiring;
    this->rotorNotch = notch;
    this->setRing(ringPosition);
}

void Rotor::setRing(char ringPosition) {
    while (this->componentAlphabet[0] != ringPosition) {
        this->rotate();
    }
}

void Rotor::rotate() {
    this->componentWiring = componentWiring.substr(1, 25) +
                            componentWiring.substr(0, 1);

    this->componentAlphabet = componentAlphabet.substr(1, 25) +
                              componentAlphabet.substr(0, 1);
}

char Rotor::getNotch() {
    return this->rotorNotch;
}
