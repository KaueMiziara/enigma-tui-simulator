#include <iostream>

#include "../include/Keyboard.h"

char Keyboard::takeInput() {
    char input;
    std::cout << "Insert a letter: ";

    std::cin >> input;
    input = toupper(input);

    return input;
}

u_int Keyboard::passForward(std::string s, char letter) {
    size_t index = s.find(letter, 0);
    return index;
}

char Keyboard::passBackward(std::string s, size_t index) {
    char letter = s[index];
    return letter;
}
