#pragma once

#include <string>

#include "EnigmaComponent.h"

class Reflector : public EnigmaComponent {
public:
    Reflector(std::string wiring);

    char passForward(char letter, EnigmaComponent *nextComponent) override;
};
