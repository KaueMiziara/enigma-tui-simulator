#pragma once

#include <string>

class EnigmaComponent {
public:
    std::string componentWiring;

public:
    virtual u_int passForward(std::string s, char letter);
    // virtual size_t passForward(std::string s, char letter, EnigmaComponent *nextComponent);

    virtual char passBackward(std::string s, size_t index);
};
