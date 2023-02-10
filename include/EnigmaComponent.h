#pragma once

#include <string>

class EnigmaComponent {
public:
    virtual u_int passForward(std::string s, char letter);

    virtual char passBackward(std::string s, size_t index);
};
