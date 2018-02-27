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

//init matrix to add
Matrix::Matrix(const int n) {
    size = n;
    matrix = new bool*[size];
    for(int i = 0; i < size; ++i){
        matrix[i] = new bool[n];
    }
    
    srand(time(0));
    for(size_t i = 0; i < n; ++i){
        for(size_t j = 0; j < n; ++j){
            matrix[i][j] = 1 + rand();
            cout << 1 + rand();
        }
    }
}

Matrix::Matrix(const Matrix& orig) {
    initMatrix(orig.size);
    for(int i = 0; i < orig.size; ++i){
        for(int j = 0; i < orig.size; ++j){
            matrix[i][j] = orig.matrix[i][j];
        }
    }
}

Matrix::~Matrix() {
    for(int i = 0; i < size; ++i){
        delete matrix[i];
    }
    delete matrix;
}

Matrix Matrix::doOr(const Matrix& m){
    // test meme taille
    if(size != m.size){
        return nullptr;
    }
    Matrix result = new Matrix(size);
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            result[i][j] = this->matrix[i][j] || m.matrix[i][j];
        }
    }
}

Matrix Matrix::doXor(const Matrix& m){
     // test meme taille
    if(size != m.size){
        return nullptr;
    }
    Matrix result = new Matrix(size);
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            result[i][j] = !this->matrix[i][j] != !m.matrix[i][j];
        }
    }
}

Matrix Matrix::doAnd(const Matrix& m){
     // test meme taille
    if(size != m.size){
        return nullptr;
    }
    Matrix result = new Matrix(size);
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            result[i][j] = this->matrix[i][j] || m.matrix[i][j];
        }
    }
}

void Matrix::initMatrix(const int n){
    if(matrix == nullptr){
        size = n;
        matrix = new bool*[size];
        for(int i = 0; i < size; ++i){
            matrix[i] = new bool[n];
        }
    }
}
    
ostream& operator <<(ostream& lhs, const Matrix& rhs){
    for(size_t i = 0; i < rhs.size; ++i){
        for(size_t j = 0; j < rhs.size; ++j){
            lhs << rhs.matrix[i][j] << " ";
        }
        lhs << "\n";
    }
}
    