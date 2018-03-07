/* 
 * File:   OrMatrix.h
 * Author: james
 *
 * Created on 22 février 2018, 17:59
 */

#ifndef ORMATRIX_H
#define ORMATRIX_H

#include "Operator.h"

/**
 *  Classe enfant de oerator permettant de surcharger la méthode execute pour effectuer un opération
 *   booleean OR entre 2 booleean.
 */
class OrOperator : public Operator{
public:
    /**
     * Résout l'opération booleean OR entre 2 booleean
     * @param lhs   Opérande gauche
     * @param rhs   Opérande droite
     * @return lhs OR rhs
    */
    bool execute(bool lhs, bool rhs) const;
};

#endif /* ORMATRIX_H */

