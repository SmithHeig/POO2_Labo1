/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OrMatrix.h
 * Author: james
 *
 * Created on 22 février 2018, 17:59
 */

#ifndef ORMATRIX_H
#define ORMATRIX_H

#include "Operator.h"

class OrOperator : public Operator{
public:
    bool execute(bool lhs, bool rhs) const;
};

#endif /* ORMATRIX_H */

