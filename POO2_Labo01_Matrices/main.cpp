/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jeremie
 *
 * Created on 22. février 2018, 16:48
 */

#include <cstdlib>

using namespace std;
#include "Matrix.h"
#include "utils.h"
/*
 * 
 */
int main(int argc, char** argv) {
    Matrix  m1 = Matrix(4);
    Matrix  m2 = Matrix(4);
    Matrix* m4;

    m4 = new Matrix(3);
    
    /* TEST RANDOM */
    for(int i = 0; i < 20; ++i){
        for(int j = 0; j < 20; ++j){
            cout << Utils::doRand(i) << " ";
        }
        cout << "\n";
    }
    
    cout << "M1: \n" << m1 << "\n";
    cout << "M2: \n" << m2 << "\n";
   
    Matrix m3 = m1.orVal(m2);
    
    
    cout << "M3 (m1.doOrVal(m2)): \n" << m3 << "\n";
    
    m4 = m1.orPtr(m2);
    cout << "M4 (m1.doOrPtr(m2)): \n" << *m4 << "\n";
   
    m1.orReplace(m2);
    
    cout << "M1 (m1.doOrReplace(m2)): \n" << m1 << "\n";
    //Matrix m3;
    return 0;
}

