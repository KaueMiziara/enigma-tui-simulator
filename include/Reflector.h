#pragma once

#include <string>

#include "EnigmaComponent.h"

class Reflector : public EnigmaComponent {
private:
    std::string wiringInput();

    void setRing(char ringPosition);

public:
    Reflector();
    
    Reflector(char ringPosition);
};
