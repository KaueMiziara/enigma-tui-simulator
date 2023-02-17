# Enigma Simulator (CLI)
Encrypt messages using the Enigma machine (CLI version)<br>

> Both the code and this README section are currently WIP


## About the Enigma Machine
The Enigma is a machine extensively used by the Nazi Germany Armed Forces during World War II.<br>
It enciphers messages using an electromechanical mecanism that consists in:
- 1 keyboard;
- 1 plugboard, connecting 10 pairs of letters;
- 3 rotors;
- 1 reflector;
- 26 lights that shows the enciphered letter.


### Keyboard
Similar to a typing machine keyboard.<br>
After pressing a key, an electrical signal is passed to the plugboard, where the letter could be scrambled.<br>

### Plugboard
A board in the machine's front side, containing a socket for each alphabet letter, wired to the respective keyboard key.<br>
Ten pair of letter are chosen to be plugged, swapping the letter if a signal is received, i.e. if 'A' and 'B' are connected in the plugboard and 'A' is pressed on the keyboard, the output would be 'B'.<br>

### Rotors
The rotors are wheels with two faces, one containing, for each letter in the alphabet, contact pins to pass an electrical signal and the other containing metallic plates to receive this signal.<br>
Each pin and plate represent a letter; the input letter is scrambled by connecting the pin that represents it to a plate that represents another letter.
There are a few different types of rotors, each wiring the faces in different ways.<br>
The rotor also has a mechanism that makes its wheels rotate after each time the keyboard is press, reconnecting the faces in a different setting, so if the same letter is pressed multiple times, the enciphered message will have different letters, making the code harder to crack.<br>
Regular Enigma machines have 3 rotors connected side by side, but only the rightmost rotates.<br>
Each rotor model has a notch in a different key; the left side rotor will only move when the mechanism that rotates the wheels (a ratchet with pawls) pushes the notch, making both rotors step together.<br>

### Reflector
Similar to a rotor, but doesn't rotate nor has anything connected to its left.<br>
The reflector receives the electrical signal from the last rotor, passes to its other face and, instead of sending to a next component, it passes it back to its first face, sending to the last rotor again.<br>

### Electrical signal path
After pressing any keyboard key, the rotor steps, then:
- The signal goes to the plugboard, which might scramble the letter once, then sends it to the rightmost rotor;
- The signal goes through its wiring, scrambling the letter when it reaches the rotors other face. Then, it is passed to the middle rotor;
- The last step repeats, then again in the left rotor, where the signal is passed to the reflector;
- There, the letter is scramble again and the signal is passed back to the rotors, repeating the process;
- After passing backwards through the right rotor, the signal is sent back to the plugboard, where the letter might be swapped once more;
- Finally, the plugboard send the letter to the lights, showing the user the enciphered letter.

### Calculating the number of possible initial settings
> TODO
> 5.4.3 ways to choose rotors -->
> 5 ways to choose the reflector
> 26^4 ways to choose the letters initial positions
> 26!/(6!.10!.2^10) ways to choose the plugboard settings


## About this application

### Building the executable from source
It can be easily built using CMake:<br>

First, clone the source code (or download the .zip file):<br>
```bash
git clone https://github.com/KaueMiziara/k-enigma-cli.git
```
Then, open the directory in the terminal and use cmake to build the executable:<br>
```bash
cd path/to/directory

# This will create a 'build' folder and generate the buildsystem
cmake -S . -B build

# This will build the project using the generated buildsystem
cmake --build build
```
The executable will be inside the 'build' folder.<br>

### Changing the plugboard settings
To choose the letter pairs connected in the plugboard, edit the file 'PlugboardSettings.txt'.<br>
- Each line is expected to have a pair of letters.<br>
- If there are more than two letters in a single line, they will be ignored.<br>
- If a non ASCII-alphabetic character is found, it will be replaced by the letter 'A'.<br>
- If there is a single letter in a line, it will be matched with 'A'.<br>

### Running and configuring the machine
Just run the executable file from the terminal:

```bash
cd /path/to/folder/build
./enigma-cli

# Choose the rotors
(1/3) What rotor should be used?
Rotor list: 'I', 'II', 'III', 'IV', 'V', default: 'I'
user > input left rotor

(2/3) What rotor should be used?
Rotor list: 'I', 'II', 'III', 'IV', 'V', default: 'I'
user > input middle rotor

(3/3) What rotor should be used?
Rotor list: 'I', 'II', 'III', 'IV', 'V', default: 'I'
user > input right rotor

# Choose the reflector
What reflector should be used?
Reflector list: 'A', 'B', 'C', 'Beta', 'Gamma', default: 'A'
user > input reflector

# Prints the wiring for the chosen rotors and reflector
Leftmost rotor wiring: ..., notch: ...
Middle rotor wiring: ..., notch: ...
Rightmost rotor wiring: ..., notch: ...

Reflector wiring: ...

Plugboard settings: ...

# Machine keyboard input
Insert a text:
user > input text to be enciphered
```
