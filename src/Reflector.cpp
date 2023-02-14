#include <iostream>

#include "../include/Constants.h"
#include "../include/Reflector.h"

Reflector::Reflector() {
    std::cout << std::endl;

    std::cout << "What reflector should be used?" << std::endl;
    this->componentWiring = REFLECTORS.at(this->wiringInput());
}

std::string Reflector::wiringInput() {
    std::string reflector;
    std::cin >> reflector;

    std::cin.ignore();

    for (char &c : reflector) {c = toupper(c);}

    if (REFLECTORS.find(reflector) != REFLECTORS.end()) return reflector;
    else return "A";
}
