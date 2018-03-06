/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "RandomOperator.h"


/* 
 * File:   randomOperator.cpp
 * Author: Jeremie
 * 
 * Created on 6. mars 2018, 17:15
 */

#include "Operator.h"
#include "../utils.h"

bool RandomOperator::execute(bool lhs, bool rhs) const{
    return (bool) Utils::doRand(2);
}
