/* Path: Keyboad input -> Plugboard -> Rotors -> Plugboard -> Output

 * First version, hard input the following settings:
 * Reflector: A
 * Rotors: I-II-III
 * Plugboard: A-B, C-D, E-F
 * Message: A => Q

 * Reflector A: EJMZALYXVBWFCRQUONTSPIKHGD
 * Rotor I:     EKMFLGDQVZNTOWYHXUSPAIBRCJ, notch: Q
 * Rotor II:    AJDKSIRUXBLHWTMCQGZNPYFVOE, notch: E
 * Rotor III:   BDFHJLCPRTXVZNYEIWGAKMUSQO, notch: V
 */

#include <iostream>
#include <string>

#include "../include/Constants.h"
#include "../include/Keyboard.h"

int main(int argc, char **argv) {
    Keyboard keyboard;

    char input = keyboard.takeInput();

    size_t index = keyboard.passForward(ALPHABET, input);
    char letter = keyboard.passBackward(ALPHABET, index);

    std::cout << index << std::endl;
    std::cout << letter << std::endl;
}
