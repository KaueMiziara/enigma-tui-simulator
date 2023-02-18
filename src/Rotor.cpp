#include <iostream>

#include "../include/Constants.h"
#include "../include/Rotor.h"

Rotor::Rotor() {
    this->componentWiring = ALPHABET;
    this->rotorNotch = 'A';
    this->ringPosition = 'A';
}

Rotor::Rotor(int n) {
    std::cout << "(" << n << "/3) What rotor should be used?\n";
    std::cout << "Rotor list: 'I', 'II', 'III', 'IV', 'V', default: 'I'\n";

    auto rotor = ROTORS.at(this->wiringInput());

    this->componentWiring = rotor.wiring;
    this->rotorNotch = rotor.notch;

    std::cout << "(" << n << "/3) What should be the rotor initial position?\n";
    std::cout << "Default: 'A'\n";

    this->setRing();
}

void Rotor::setRing() {
    char position;
    std::cin >> position;
    std::cin.ignore();
    
    if (isalpha(position)) this->ringPosition = toupper(position);
    else this->ringPosition = 'A';

    while (this->componentAlphabet[0] != ringPosition) {
        this->rotate();
    }
}

void Rotor::rotate() {
    this->componentWiring = componentWiring.substr(1, 25) +
                            componentWiring.substr(0, 1);

    this->componentAlphabet = componentAlphabet.substr(1, 25) +
                              componentAlphabet.substr(0, 1);
}

char Rotor::getNotch() {
    return this->rotorNotch;
}

std::string Rotor::wiringInput() {
    std::string rotor;
    std::cin >> rotor;

    std::cin.ignore();

    for (char &c : rotor) {c = toupper(c);}

    if (ROTORS.find(rotor) != ROTORS.end()) return rotor;
    else return "I";
}
