/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   XorMatrix.h
 * Author: james
 *
 * Created on 22 février 2018, 17:59
 */

#ifndef XORMATRIX_H
#define XORMATRIX_H

#include "Operator.h"

class XorOperator: public Operator{
public:
    bool execute(bool lhs, bool rhs) const;

};

#endif /* XORMATRIX_H */

