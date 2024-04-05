#pragma once

#include <string>
#include <unordered_map>

struct RotorWiring
{
    std::string wiring;
    char notch;
};

const std::string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

const std::unordered_map<std::string, RotorWiring> ROTORS {
    {"I",   RotorWiring{"EKMFLGDQVZNTOWYHXUSPAIBRCJ", 'Q'}},
    {"II",  RotorWiring{"AJDKSIRUXBLHWTMCQGZNPYFVOE", 'E'}},
    {"III", RotorWiring{"BDFHJLCPRTXVZNYEIWGAKMUSQO", 'V'}},
    {"IV",  RotorWiring{"ESOVPZJAYQUIRHXLNFTGKDCMWB", 'J'}},
    {"V",   RotorWiring{"VZBRGITYUPSDNHLXAWMJQOFECK", 'Z'}},
};

const std::unordered_map<std::string, std::string> REFLECTORS = {
    {"A", "EJMZALYXVBWFCRQUONTSPIKHGD"},
    {"B", "YRUHQSLDPXNGOKMIEBFZCWVJAT"},
    {"C", "FVPJIAOYEDRZXWGCTKUQSBNMHL"},
    {"BETA",  "LEYJVCNIXWPBQMDRTAKZGFUHOS"},
    {"GAMMA", "FSOKANUERHMBTIYCWLQPZXVGJD"},
};
