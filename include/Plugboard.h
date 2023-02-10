#pragma once

#include <vector>
#include <string>

#include "Constants.h"

class Plugboard {
private:
    std::string swapped = ALPHABET;

public:
    void swapLetters(std::vector<std::string> pairs);

    std::string getSwapped();
};
