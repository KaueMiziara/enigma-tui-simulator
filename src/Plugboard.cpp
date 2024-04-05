#include <iostream>
#include <fstream>

#include "../include/Plugboard.h"

Plugboard::Plugboard()
{
    this->componentWiring = ALPHABET;
    this->swapLetters(this->getPairs());
}

void Plugboard::swapLetters(std::vector<std::string> pairs)
{
    for (std::string pair : pairs)
    {
        char firstLetter = pair[0];
        char secondLetter;
        if (isalpha(pair[1])) secondLetter = pair[1];
        else secondLetter = 'A';

        size_t firstPosition = ALPHABET.find(firstLetter, 0);
        size_t secondPosition = ALPHABET.find(secondLetter, 0);

        std::swap(componentWiring[firstPosition], componentWiring[secondPosition]);
    }
}

std::vector<std::string> Plugboard::getPairs()
{
    const std::string file{"PlugboardSettings.txt"};
    std::ifstream fileStream{file};

    std::vector<std::string> pairs{};

    if (fileStream)
    {
        std::string tmp{};
        while (fileStream >> tmp)
        {
            for (char& letter : tmp)
            {
                if (isalpha(letter)) letter = toupper(letter);
                else letter = 'A';
            }
            pairs.push_back(tmp);
        }
    }
    else
    {
        std::cerr << "\t\033[1;31mError:\033[0m Could not open file 'PlugboardSettings.txt\n";
    }

    return pairs;
}
