/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.cpp
 * Author: james
 * 
 * Created on 22 février 2018, 16:57
 */

#include "Matrix.h"
#include <time.h>


Matrix::Matrix(const int n) {
    size = n;
    matrix = new bool*[n];
    for(int i = 0; i < n; ++i){
        matrix[i] = new bool[n];
    }
    
    srand(time(0));
    for(size_t i = 0; i < n; ++i){
        for(size_t j = 0; j < n; ++j){
            matrix[i][j] = 1 + rand() % 1;
        }
    }
}

Matrix::Matrix(const Matrix& orig) {
    this->size = orig.size;
}

Matrix::~Matrix() {
    for(int i = 0; i < size; ++i){
        delete matrix[i];
    }
    delete matrix;
}

Matrix Matrix::doOr(const Matrix& m){
    
}

Matrix Matrix::doXor(const Matrix& m){
    
}

Matrix Matrix::doAnd(const Matrix& m){
    
}