#include <iostream>

#include "../include/Constants.h"
#include "../include/Keyboard.h"

Keyboard::Keyboard()
{
    this->componentWiring = ALPHABET;
}

std::string Keyboard::takeInput()
{
    std::string input = "";
    std::cout << "Insert a text: ";

    std::getline(std::cin, input);
    for (char &letter : input)
        letter = toupper(letter);

    return input;
}
