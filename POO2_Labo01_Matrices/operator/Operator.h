/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Operator.h
 * Author: james
 *
 * Created on 22 février 2018, 17:55
 */

#ifndef OPERATOR_H
#define OPERATOR_H

class Operator{

public:
    virtual bool execute(bool lhs, bool rhs) const {};
};

#endif /* OPERATOR_H */

