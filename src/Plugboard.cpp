#include <utility>
#include <vector>
#include <string>

#include "../include/Plugboard.h"

void Plugboard::swapLetters(std::vector<std::string> pairs) {
    for (std::string pair : pairs) {
        char firstLetter = pair[0];
        char secondLetter = pair[1];

        size_t firstPosition = this->swapped.find(firstLetter);
        size_t secondPosition = this->swapped.find(secondLetter);

        std::swap(swapped[firstPosition], swapped[secondPosition]);
        
    }
}

std::string Plugboard::getSwapped() {
    std::vector<std::string> pairs {"AB", "CD", "EF"};
    this->swapLetters(pairs);

    return swapped;
}
