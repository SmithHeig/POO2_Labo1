/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   utils.cpp
 * Author: Jeremie
 * 
 * Created on 3. mars 2018, 23:27
 */

#include "utils.h"
#include <iostream>

// https://stackoverflow.com/questions/24005459/implementation-of-the-random-number-generator-in-c-c
const unsigned Utils::_RAND_MAX = 32767;

Utils::Utils(){
    srand(time(0));
}

unsigned Utils::doRand(unsigned n) {
    return rand() / (_RAND_MAX + 1.0) * n;
}

