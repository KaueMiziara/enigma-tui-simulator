#pragma once

#include <string>

#include "EnigmaComponent.h"

class Reflector : public EnigmaComponent {
public:
    Reflector();
    
    Reflector(std::string wiring);
};
