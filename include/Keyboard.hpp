#pragma once

#include "EnigmaComponent.hpp"

class Keyboard : public EnigmaComponent
{
public:
    Keyboard();

    std::string takeInput();
};
