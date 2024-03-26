#include <iostream>

#include "../include/Constants.h"
#include "../include/Reflector.h"

Reflector::Reflector()
{
    this->componentWiring = ALPHABET;
}

Reflector::Reflector(char position)
{
    std::cout << "\n";

    std::cout << "What reflector should be used?\n";
    std::cout << "Reflector list: 'A', 'B', 'C', 'Beta', 'Gamma', default: 'A'\n";

    this->componentWiring = REFLECTORS.at(this->wiringInput());
}

std::string Reflector::wiringInput()
{
    std::string reflector;
    std::cin >> reflector;

    std::cin.ignore();

    for (char &c : reflector) {c = toupper(c);}

    if (REFLECTORS.find(reflector) != REFLECTORS.end()) return reflector;
    else return "A";
}
