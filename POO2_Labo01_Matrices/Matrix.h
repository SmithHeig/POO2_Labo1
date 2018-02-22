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

class Matrix {
private:
    bool** matrix;
    int size;
public:
    Matrix(const int n);
    Matrix(const Matrix& orig);
    virtual ~Matrix();
    
    Matrix doOr(const Matrix& m);
    Matrix doXor(const Matrix& m);
    Matrix doAnd(const Matrix& m);
    
};

#endif /* MATRIX_H */

