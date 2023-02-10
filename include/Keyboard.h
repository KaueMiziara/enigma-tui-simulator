#pragma once

#include <string>

#include "EnigmaComponent.h"

class Keyboard : public EnigmaComponent {
public:
    Keyboard();

    char takeInput();
};
