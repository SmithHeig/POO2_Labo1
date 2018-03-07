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

/**
 * Classe permettant de générer des matrices carée de booleean d'un taille n.
 * Cette classe permet aussi d'effectuer des operations binnaires sur ces matrices.
 *  
 */
class Matrix{
    
    //* VARIABLES *//
private:
    bool** matrix;                          // Matrice carée
    size_t size;                            // Taille de la matrice
    
    // OPERATEUES
    static const OrOperator OR_OP;
    static const XorOperator XOR_OP;
    static const AndOperator AND_OP;
    static const RandomOperator RAND_OP;

    //* Constructeurs *//
public:
    
    /**
     * Seul constrcteur de Matrix. 
     * @param n         Taille de la matrice
     * @param setValue  Indique si la matrice est initialisée avec des valeurs booleens (true => oui, fase => non)
     * 
     * @throw       std::bad_array_new_length() si n est trop long 
     * @throw       std::bad_alloc              erreur memoire avec le new
     */
    Matrix(size_t n, bool setValue = true);
    virtual ~Matrix();
    
    
private: 
    /**
     * Applique un Operator sur tout les élément d'un objet Matrix entre 2 matrices (m1 et m2)
     * Les resultats des opération est afectés à l'objet appelant (this)
     * @param m1    Matrice opérande 1
     * @param m2    Matrice opérande 2
     * @param o     Opérateur à appliquer pour chaque valeur entre m1 et m2
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     */
    void binaryOperarations(const Matrix& m1, const Matrix& m2, const Operator& o);
    
    /**
     * Applique un Operator sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Le resultats des opération sont afectés à une nouvelle matrice
     * @param m     Matrice opérande 2
     * @param o     Opérateur à appliquer pour chaque valeur entre this et opérande2
     * @return      Retour par valeur de la nouvelle matrice créée
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     */
    Matrix operateVal(const Matrix& m, const Operator& o) const;
    
    /**
     * Applique un Operator sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Le resultats des opération sont afectés à une nouvelle matrice alouée dynamiquement
     * @param m     Matrice opérande 2
     * @param o     Opérateur à appliquer pour chaque valeur entre this et opérande2
     * @return      Retour d'un pointeur sur la nouvelle matrice créée
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     * @throw       std::bad_alloc     erreur memoire avec le new       
     */
    Matrix* operatePtr(const Matrix& m, const Operator& o) const;
    

    
public:
    //* OR *//
    /**
     * Effectue une opération OR sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Les resultats des opération est afectés à l'objet appelant (this)
     * @param m     Matrice opérande 2
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     */
    void orReplace(const Matrix& m);
    /**
     * Effectue une opération OR sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Le resultats des opération sont afectés à une nouvelle matrice
     * @param m     Matrice opérande 2
     * @return      Retour par valeur de la nouvelle matrice créée
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     */
    Matrix orVal(const Matrix& m) const;
    /**
     * Effectue une opération OR sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Le resultats des opération sont afectés à une nouvelle matrice alouée dynamiquement
     * @param m     Matrice opérande 2
     * @return      Retour d'un pointeur sur la nouvelle matrice créée
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     * @throw       std::bad_alloc     erreur memoire avec le new
     */
    Matrix* orPtr(const Matrix& m) const;
    
    
    //* XOR *//
    /**
     * Effectue une opération XOR sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Les resultats des opération est afectés à l'objet appelant (this)
     * @param m     Matrice opérande 2
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     */
    void xorReplace(const Matrix& m);
    /**
     * Effectue une opération XOR sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Le resultats des opération sont afectés à une nouvelle matrice
     * @param m     Matrice opérande 2
     * @return      Retour par valeur de la nouvelle matrice créée
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     */
    Matrix xorVal(const Matrix& m) const;
    /**
     * Effectue une opération XOR sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Le resultats des opération sont afectés à une nouvelle matrice alouée dynamiquement
     * @param m     Matrice opérande 2
     * @return      Retour d'un pointeur sur la nouvelle matrice créée
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     * @throw       std::bad_alloc     erreur memoire avec le new
     */
    Matrix* xorPtr(const Matrix& m) const;
    
    
    //* AND *//
    /**
     * Effectue une opération AND sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Les resultats des opération est afectés à l'objet appelant (this)
     * @param m     Matrice opérande 2
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     */
    void andReplace(const Matrix& m);
    
    /**
     * Effectue une opération AND sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Le resultats des opération sont afectés à une nouvelle matrice
     * @param m     Matrice opérande 2
     * @return      Retour par valeur de la nouvelle matrice créée
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     */
    Matrix andVal(const Matrix& m) const;
    
    /**
     * Effectue une opération AND sur tous les éléments d'un objet Matrix entre 2 matrices (this et opérande2)
     * Le resultats des opération sont afectés à une nouvelle matrice alouée dynamiquement
     * @param m     Matrice opérande 2
     * @return      Retour d'un pointeur sur la nouvelle matrice créée
     * 
     * @throw       Invalid_argument() si la taille des matrices ne sont pas égales 
     * @throw       std::bad_alloc     erreur memoire avec le new
     */
    Matrix* andPtr(const Matrix& m) const;
    
    
    /**
     * Affiche une matrice carrée au format ligne collones.
     * @param lhs   stram d'entrée
     * @param rhs   Objet que l'on veut afficher
     * @return      stream avec l'affichage de l'objet
     * 
     */
    friend ostream& operator <<(ostream& lhs, const Matrix& rhs);
    
};

#endif /* MATRIX_H */

