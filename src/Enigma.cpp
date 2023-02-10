#include <string>

#include "../include/Enigma.h"
#include "../include/Constants.h"
#include "../include/Keyboard.h"
#include "../include/Plugboard.h"
#include "../include/Rotor.h"

char Enigma::encipher() {
    Keyboard keyboard;
    Plugboard plugboard;

    Rotor rotorLeft = Rotor(ROTOR_I, 'Q');
    Rotor rotorMiddle = Rotor(ROTOR_II, 'E');
    Rotor rotorRight = Rotor(ROTOR_III, 'V');

    // TODO:
    // take input and pass to plugboard
    // pass letter from plugboard into rotors
    // pass from rotors to the reflector
    // reflector -> rotors
    // rotors -> plugboard == output

    return 'A';
}
