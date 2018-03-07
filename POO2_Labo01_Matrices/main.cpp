/* 
 * File:   main.cpp
 * Author: Jérémie Chatillon et James Smith
 *
 * Created on 22. février 2018, 16:48
 */

#include <cstdlib>
#include <ratio>
#include "Matrix.h"
#include "Utils.h"

using namespace std;

int main(int argc, char** argv) {

    
    /* TEST RANDOM */
    cout << "\n\nTEST RANDOM:\n";
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 20; ++j){
            cout << Utils::doRand(i) << " ";
        }
        cout << "\n";
    }
    
    /* TEST MATRIX */
    cout << "\n\nTEST MATRIX:\n";
    Matrix  m1(4);
    Matrix  m2(4);
    Matrix* m4;
    cout << "M1: \n" << m1 << "\n";
    cout << "M2: \n" << m2 << "\n";
   
    
    // Operation retour par valeur
    cout << "\nOperation retour par valeur:\n";
    Matrix m3 = m1.orVal(m2);    
    cout << "M3 (m1.orVal(m2)): \n" << m3 << "\n";
    Matrix m5 = m1.andVal(m2);    
    cout << "M5 (m1.andVal(m2)): \n" << m5 << "\n";
    Matrix m7 = m1.xorVal(m2);    
    cout << "M7 (m1.xorVal(m2)): \n" << m7 << "\n";
    
    
    // Operation retour par pointeur
    cout << "\nOperation retour par pointeur:\n";
    m4 = m1.orPtr(m2);
    cout << "M4 (m1.orPtr(m2)): \n" << *m4 << "\n";
    m4 = m1.andPtr(m2);
    cout << "M4 (m1.andPtr(m2)): \n" << *m4 << "\n";
    m4 = m1.xorPtr(m2);
    cout << "M4 (m1.xorPtr(m2)): \n" << *m4 << "\n";
    
   
    // Operation par remplacement
    cout << "\nOperation par remplacement: \n";
    m1.xorReplace(m2);
    cout << "M1 (m1.xorReplace(m2)): \n" << m1 << "\n";
    m1.orReplace(m2);
    cout << "M1 (m1.orReplace(m2)): \n" << m1 << "\n";
    m1.andReplace(m2);
    cout << "M1 (m1.andReplace(m2)): \n" << m1 << "\n";
    
    
    
    // TEST ERREUR //
    cout << "\n\nTEST ERREUR:\n";
    Matrix m6 = Matrix(5);
    try{
        m1.orPtr(m6);
    } catch (exception& e){
        cout << "Error: " << e.what() << "\n";
    }
    
    
    try{
        Matrix m8 = Matrix(-5);
    } catch (exception& e){
        cout << "Error: " << e.what() << "\n";
    }
    
    return 0;
}

