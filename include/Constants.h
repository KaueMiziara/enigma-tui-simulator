#pragma once

#include <string>
#include <unordered_map>

const std::string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

const std::unordered_map<std::string, std::string> ROTORS {
    {"I",   "EKMFLGDQVZNTOWYHXUSPAIBRCJ"},
    {"II",  "AJDKSIRUXBLHWTMCQGZNPYFVOE"},
    {"III", "BDFHJLCPRTXVZNYEIWGAKMUSQO"},
    {"IV",  "ESOVPZJAYQUIRHXLNFTGKDCMWB"},
    {"V",   "VZBRGITYUPSDNHLXAWMJQOFECK"},
};

const std::unordered_map<std::string, std::string> REFLECTORS = {
    {"A", "EJMZALYXVBWFCRQUONTSPIKHGD"},
    {"B", "YRUHQSLDPXNGOKMIEBFZCWVJAT"},
    {"C", "FVPJIAOYEDRZXWGCTKUQSBNMHL"},
    {"BETA",  "LEYJVCNIXWPBQMDRTAKZGFUHOS"},
    {"GAMMA", "FSOKANUERHMBTIYCWLQPZXVGJD"},
};
