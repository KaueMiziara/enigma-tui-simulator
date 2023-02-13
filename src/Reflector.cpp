#include <string>

#include "../include/Constants.h"
#include "../include/Reflector.h"

Reflector::Reflector() {
    this->componentWiring = ALPHABET;
}

Reflector::Reflector(std::string wiring) {
    this->componentWiring = wiring;
}
