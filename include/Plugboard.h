#pragma once

#include <vector>

#include "EnigmaComponent.h"

class Plugboard : public EnigmaComponent
{
public:
    Plugboard();
    
    void swapLetters(std::vector<std::string> pairs);

    std::vector<std::string> getPairs();
};
