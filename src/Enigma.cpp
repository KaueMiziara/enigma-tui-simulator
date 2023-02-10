#include <string>

#include "../include/Enigma.h"
#include "../include/Constants.h"
#include "../include/Keyboard.h"
#include "../include/Plugboard.h"

char Enigma::encipher() {
    Keyboard keyboard;
    Plugboard plugboard;

    std::string output = plugboard.getSwapped();

    char input = keyboard.takeInput();

    size_t index = keyboard.passForward(ALPHABET, input);
    char letter = keyboard.passBackward(output, index);

    return letter;
}
