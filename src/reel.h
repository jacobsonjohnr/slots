#ifndef REEL_H
#define REEL_H

#include <random>


enum class Symbols { Blank, Bar, Jack, Queen, King, Seven, Illinois };

int generateRandomNum(int low, int high);

std::mt19937& seedNumberGen();


#endif