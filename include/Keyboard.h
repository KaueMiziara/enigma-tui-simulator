#pragma once

#include <string>

#include "EnigmaComponent.h"

class Keyboard : public EnigmaComponent {
public:
    Keyboard();

    std::string takeInput();
};
