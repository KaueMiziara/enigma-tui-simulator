#pragma once

#include "EnigmaComponent.hpp"

class Reflector : public EnigmaComponent
{
private:
    std::string wiringInput();

public:
    Reflector();
    
    Reflector(char position);
};
