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

#include "../include/Enigma.h"

int main(int argc, char **argv) {
    Enigma enigma;

    std::cout << enigma.encipherText() << std::endl;
}
