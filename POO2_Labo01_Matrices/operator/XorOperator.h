/* 
 * File:   XorOperator.h
 * Author: Jérémie Chatillon et James Smith
 *
 * Created on 22 février 2018, 17:59
 */

#ifndef XORMATRIX_H
#define XORMATRIX_H

#include "Operator.h"

/**
 *  Classe enfant de oerator permettant de surcharger la méthode execute pour effectuer un opération
 *   booleean XOR entre 2 booleean.
 */
class XorOperator : public Operator{
public:
    /**
     * Résout l'opération booleean OR entre 2 booleean
     * @param lhs   Opérande gauche
     * @param rhs   Opérande droite
     * @return lhs XOR rhs
    */
    bool execute(bool lhs, bool rhs) const;
};

#endif /* XORMATRIX_H */

