#include <iostream>

#include "../include/Constants.hpp"
#include "../include/Keyboard.hpp"

Keyboard::Keyboard()
{
    this->componentWiring = ALPHABET;
}

std::string Keyboard::takeInput()
{
    std::string input = "";
    std::cout << "Insert a text: ";

    std::getline(std::cin, input);
    for (char& letter : input)
        letter = toupper(letter);

    return input;
}
