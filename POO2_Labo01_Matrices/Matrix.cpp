/* 
 * File:   Matrix.cpp
 * Author: james
 * 
 * Created on 22 février 2018, 16:57
 */

#include "Matrix.h"


const OrOperator Matrix::OR_OP = OrOperator();
const XorOperator Matrix::XOR_OP = XorOperator();

const AndOperator Matrix::AND_OP = AndOperator();
const RandomOperator Matrix::RAND_OP = RandomOperator();

Matrix::Matrix(size_t n, bool setValue): size(n){
    matrix = new bool*[size];
    for(int i = 0; i < size; ++i)
        matrix[i] = new bool[n];
    

   if(setValue)
       this->binaryOperarations(*this, *this, RAND_OP);
}

Matrix::~Matrix() {
    for(int i = 0; i < size; ++i)
        delete[] matrix[i];
    
    delete[] matrix;
}

void Matrix::binaryOperarations(const Matrix& m1, const Matrix& m2, const Operator& o){
    if(m1.size != m2.size || this->size != m1.size)
        throw runtime_error("Size not equal");
    
    for(int i = 0; i < this->size; ++i){
        for(int j = 0; j < this->size; ++j){
            this->matrix[i][j] = o.execute(m1.matrix[i][j], m2.matrix[i][j]);
        }
    }
}


Matrix* Matrix::operatePtr(const Matrix& m, const Operator& o) const{
    Matrix* ret = new Matrix(m.size, 0);
    try{
        ret->binaryOperarations(*this, m, o);
    } catch (exception e){
        delete ret;
        throw e;
    }
    return ret;
}

Matrix Matrix::operateVal(const Matrix& m, const Operator& o) const{
    Matrix ret = Matrix(m.size, 0);
    ret.binaryOperarations(*this, m, o);
    return ret;
}

//* OR OPERATROS *//
Matrix* Matrix::orPtr(const Matrix& m) const{    
    return operatePtr(m, OR_OP);
}

Matrix Matrix::orVal(const Matrix& m) const{
    return operateVal(m, OR_OP);
}

void Matrix::orReplace(const Matrix& m){
    this->binaryOperarations(*this, m, OR_OP);
}

//* XOR OPERATROS *//
Matrix* Matrix::xorPtr(const Matrix& m) const{    
    return operatePtr(m, XOR_OP);
}

Matrix Matrix::xorVal(const Matrix& m) const{
    return operateVal(m, XOR_OP);
}

void Matrix::xorReplace(const Matrix& m){
    this->binaryOperarations(*this, m, XOR_OP);
}

//* AND OPERATROS *//
Matrix* Matrix::andPtr(const Matrix& m) const{    
    return operatePtr(m, AND_OP);
}

Matrix Matrix::andVal(const Matrix& m) const{
    return operateVal(m, AND_OP);
}

void Matrix::andReplace(const Matrix& m){
    this->binaryOperarations(*this, m, AND_OP);
}



    
    

ostream& operator <<(ostream& lhs, const Matrix& rhs){
    for(size_t i = 0; i < rhs.size; ++i){
        for(size_t j = 0; j < rhs.size; ++j)
            lhs << rhs.matrix[i][j] << " ";
        
        lhs << "\n";
    }
    return lhs;
}
 