/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AndMatrix.cpp
 * Author: james
 * 
 * Created on 22 février 2018, 17:59
 */

#include "AndOperator.h"

bool AndOperator::execute(bool lhs, bool rhs) const{
    return lhs & rhs;
}

