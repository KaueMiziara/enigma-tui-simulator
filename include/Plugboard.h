#pragma once

#include <vector>
#include <string>

#include "EnigmaComponent.h"

class Plugboard : public EnigmaComponent {
public:
    Plugboard();
    
    void swapLetters(std::vector<std::string> pairs);

    void getSwapped();
};
