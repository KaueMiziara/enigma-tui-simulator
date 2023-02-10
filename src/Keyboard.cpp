#include <iostream>

#include "../include/Keyboard.h"

char Keyboard::takeInput() {
    char input;
    std::cout << "Insert a letter: ";

    std::cin >> input;
    input = toupper(input);

    return input;
}
