#include "../include/EnigmaComponent.hpp"

char EnigmaComponent::passForward(char letter, EnigmaComponent *nextComponent)
{
    size_t index = this->componentWiring.find(letter, 0);

    index = this->componentAlphabet.find(this->componentWiring[index]);
    letter = nextComponent->getWiring()[index];

    return letter;
}

char EnigmaComponent::passBackward(char letter, EnigmaComponent *nextComponent)
{
    size_t index = this->componentWiring.find(letter, 0);

    letter = nextComponent->componentAlphabet[index];
    index = nextComponent->getWiring().find(letter);

    letter = nextComponent->getWiring()[index];

    return letter;
}

std::string EnigmaComponent::getWiring()
{
    return this->componentWiring;
}

std::string EnigmaComponent::getAlphabet()
{
    return this->componentAlphabet;
}
