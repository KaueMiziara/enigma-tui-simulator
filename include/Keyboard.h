#pragma once

#include "EnigmaComponent.h"

class Keyboard : public EnigmaComponent
{
public:
    Keyboard();

    std::string takeInput();
};
