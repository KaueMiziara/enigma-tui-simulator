#pragma once

#include <string>

class Keyboard {
public:
    char takeInput();
    
    u_int passForward(std::string s, char letter);

    char passBackward(std::string s, size_t index);
};
