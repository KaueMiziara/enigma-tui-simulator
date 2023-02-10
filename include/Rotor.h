#pragma once

#include <string>

#include "EnigmaComponent.h"

class Rotor : public EnigmaComponent {
private:
    char rotorNotch;

public:
    Rotor(std::string wiring, char notch);

    std::string getWiring();
};
