#pragma once

#include <string>

#include "EnigmaComponent.h"

class Reflector : public EnigmaComponent {
private:
    std::string wiringInput();

public:
    Reflector();
    
    // Reflector();

};
