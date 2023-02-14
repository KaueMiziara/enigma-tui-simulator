# Enigma Simulator (CLI)
Encrypt messages using the Enigma machine (CLI version)


## How does the real Enigma work?
The Enigma is a machine extensively used by Germany Armed Forces during World War II.<br>
It enciphers messages using an electromechanical mecanism that consists in:<br>
- 1 keyboard;
- 1 plugboard, connecting 10 pairs of letters;
- 3 rotors;
- 1 reflector;
- 26 lights that shows the enciphered letter.
<br>

### Keyboard and Plugboard
<!-- TODO -->

### Rotors and Reflector
<!-- TODO -->


### Calculating the number of possible initial settings
<!-- TODO -->
<!-- 5.4.3 ways to choose rotors -->
<!-- 5 ways to choose the reflector -->
<!-- 26^4 ways to choose the letters initial positions -->
<!-- 26!/(6!.10!.2^10) ways to choose the plugboard settings -->


## How does this application works?
<!-- TODO -->


### Building the executable from source
It can be easily built using CMake:<br>

First, clone the source code (or download the .zip file):<br>
```bash
git clone https://github.com/KaueMiziara/kciphers-with-cxxqt.git
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

### Running from the terminal and configuring the machine
<!-- TODO -->
```bash
cd build
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

# Machine keyboard input
Insert a text:
user > input text to be enciphered
```
