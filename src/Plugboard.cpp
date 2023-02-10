#include <utility>
#include <vector>
#include <string>

#include "../include/Constants.h"
#include "../include/Plugboard.h"

Plugboard::Plugboard() {
    this->componentWiring = ALPHABET;
    this->getSwapped();
}

void Plugboard::swapLetters(std::vector<std::string> pairs) {
    for (std::string pair : pairs) {
        char firstLetter = pair[0];
        char secondLetter = pair[1];

        size_t firstPosition = ALPHABET.find(firstLetter, 0);
        size_t secondPosition = ALPHABET.find(secondLetter, 0);

        std::swap(componentWiring[firstPosition], componentWiring[secondPosition]);
    }
}

void Plugboard::getSwapped() {
    std::vector<std::string> pairs {"AB", "CD", "EF"};
    this->swapLetters(pairs);
}
