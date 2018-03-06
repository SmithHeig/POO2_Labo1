/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.h
 * Author: james
 *
 * Created on 22 février 2018, 16:57
 */

#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

#include "utils.h"

#include "operator/AndOperator.h"
#include "operator/OrOperator.h"
#include "operator/XorOperator.h"
#include "operator/Operator.h"
#include "operator/Operator.h"
#include "operator/RandomOperator.h"

using namespace std;  

class Matrix{
private:
    bool** matrix;
    size_t size;
    
    static const OrOperator OR_OP;
    static const XorOperator XOR_OP;
    static const AndOperator AND_OP;
    static const RandomOperator RAND_OP;
    
public:
    Matrix();
    Matrix(size_t n, bool setValue = true);
    virtual ~Matrix();
    
private: 
    
    void binaryOperarations(const Matrix& m1, const Matrix& m2, const Operator& o);
    Matrix* operatePtr(const Matrix& m, const Operator& o) const;
    Matrix operateVal(const Matrix& m, const Operator& o) const;

    
public:
    void orReplace(const Matrix& m);
    Matrix orVal(const Matrix& m) const;
    Matrix* orPtr(const Matrix& m) const;
    
    void xorReplace(const Matrix& m);
    Matrix xorVal(const Matrix& m) const;
    Matrix* xorPtr(const Matrix& m) const;
    
    void andReplace(const Matrix& m);
    Matrix andVal(const Matrix& m) const;
    Matrix* andPtr(const Matrix& m) const;
    
    friend ostream& operator <<(ostream& lhs, const Matrix& rhs);
    
};

#endif /* MATRIX_H */

