#pragma once

#include <vector>
#include <string>

#include "Constants.h"
#include "EnigmaComponent.h"

class Plugboard : public EnigmaComponent {
private:
    std::string swapped = ALPHABET;

public:
    void swapLetters(std::vector<std::string> pairs);

    std::string getSwapped();
};
