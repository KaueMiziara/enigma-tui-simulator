#include <iostream>

#include "../include/Constants.h"
#include "../include/Rotor.h"

Rotor::Rotor() {
    this->componentWiring = ALPHABET;
    this->rotorNotch = 'A';
}

Rotor::Rotor(char notch, char ringPosition, int n) {
    std::cout << "(" << n << "/3) What rotor should be used?" << std::endl;
    std::cout << "Rotor list: 'I', 'II', 'III', 'IV', 'V', default: 'I'" << std::endl;

    this->componentWiring = ROTORS.at(this->wiringInput());
    this->rotorNotch = notch;
    this->setRing(ringPosition);
}

void Rotor::setRing(char ringPosition) {
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
