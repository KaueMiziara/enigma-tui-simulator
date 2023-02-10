#include "../include/EnigmaComponent.h"

char EnigmaComponent::passForward(char letter, EnigmaComponent *nextComponent) {
    size_t index = this->componentWiring.find(letter, 0);
    letter = nextComponent->getWiring()[index];

    return letter;
}

std::string EnigmaComponent::getWiring() {
    return this->componentWiring;
}
