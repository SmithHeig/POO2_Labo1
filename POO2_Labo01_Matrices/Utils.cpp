/* 
 * File:   Utils.cpp
 * Author: Jérémie Chatillon et James Smith
 * 
 * Created on 3. mars 2018, 23:27
 */

#include "Utils.h"
#include <iostream>

// https://stackoverflow.com/questions/24005459/implementation-of-the-random-number-generator-in-c-c
const unsigned Utils::_RAND_MAX = 32767;

Utils::Utils(){
    srand(time(0));
}

unsigned Utils::doRand(unsigned n) {
    return rand() / (_RAND_MAX + 1.0) * n;
}

