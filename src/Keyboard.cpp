#include <iostream>

#include "../include/Constants.h"
#include "../include/Keyboard.h"

Keyboard::Keyboard() {
    this->componentWiring = ALPHABET;
}

char Keyboard::takeInput() {
    char input;
    std::cout << "Insert a letter: ";

    std::cin >> input;
    input = toupper(input);

    return input;
}
