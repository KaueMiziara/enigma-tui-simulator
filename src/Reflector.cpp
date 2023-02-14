#include <iostream>

#include "../include/Constants.h"
#include "../include/Reflector.h"

Reflector::Reflector() {
    this->componentWiring = ALPHABET;
}

Reflector::Reflector(char ringPosition) {
    std::cout << std::endl;

    std::cout << "What reflector should be used?" << std::endl;
    std::cout << "Reflector list: 'A', 'B', 'C', 'Beta', 'Gamma', default: 'A'" << std::endl;

    this->componentWiring = REFLECTORS.at(this->wiringInput());

    this->setRing(ringPosition);
}

std::string Reflector::wiringInput() {
    std::string reflector;
    std::cin >> reflector;

    std::cin.ignore();

    for (char &c : reflector) {c = toupper(c);}

    if (REFLECTORS.find(reflector) != REFLECTORS.end()) return reflector;
    else return "A";
}

void Reflector::setRing(char ringPosition) {
    while (this->componentAlphabet[0] != ringPosition) {
        this->componentWiring = componentWiring.substr(1, 25) +
                                componentWiring.substr(0, 1);
    }
}