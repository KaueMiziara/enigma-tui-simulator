#include <string>

#include "../include/Rotor.h"

Rotor::Rotor(std::string wiring, char notch) {
    this->componentWiring = wiring;
    this->rotorNotch = notch;
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
