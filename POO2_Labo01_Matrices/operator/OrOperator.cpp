/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OrMatrix.cpp
 * Author: james
 * 
 * Created on 22 février 2018, 17:59
 */

#include "OrOperator.h"


using namespace std;

bool OrOperator::execute(bool rhs, bool lhs) const{
    return rhs || lhs;
}

