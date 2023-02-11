#pragma once

#include <string>

class EnigmaComponent {
protected:
    std::string componentWiring;

public:
    virtual char passForward(char letter, EnigmaComponent *nextComponent);
    virtual char passBackward(char letter, EnigmaComponent *nextComponent);

    virtual std::string getWiring();
};
