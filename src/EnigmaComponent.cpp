#include "../include/EnigmaComponent.h"

u_int EnigmaComponent::passForward(std::string s, char letter) {
    size_t index = s.find(letter, 0);
    return index;
}

char EnigmaComponent::passBackward(std::string s, size_t index) {
    char letter = s[index];
    return letter;
}
