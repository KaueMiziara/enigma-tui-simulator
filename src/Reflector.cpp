#include <string>

#include "../include/Constants.h"
#include "../include/Reflector.h"

Reflector::Reflector(std::string wiring) {
    this->componentWiring = wiring;
}

char Reflector::passForward(char letter, EnigmaComponent *nextComponent) {
    size_t index = this->componentWiring.find(letter, 0);

    index = ALPHABET.find(this->componentWiring[index]);
    letter = nextComponent->getWiring()[index];

    return letter;
}
