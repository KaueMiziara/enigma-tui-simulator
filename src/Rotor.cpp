#include <string>

#include "../include/Constants.h"
#include "../include/Rotor.h"

Rotor::Rotor(std::string wiring, char notch) {
    this->componentWiring = wiring;
    this->rotorNotch = notch;
}

char Rotor::passForward(char letter, EnigmaComponent *nextComponent) {
    size_t index = this->componentWiring.find(letter, 0);

    index = ALPHABET.find(this->componentWiring[index]);
    letter = nextComponent->getWiring()[index];

    return letter;
}
