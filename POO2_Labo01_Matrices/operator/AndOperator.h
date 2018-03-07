/* 
 * File:   AndOperator.h
 * Author: Jérémie Chatillon et James Smith
 *
 * Created on 22 février 2018, 17:59
 */

#ifndef ANDMATRIX_H
#define ANDMATRIX_H

#include "Operator.h"

/**
 *  Classe enfant de oerator permettant de surcharger la méthode execute pour effectuer un opération
 *   booleean AND entre 2 booleean.
 */
class AndOperator: public Operator{
public:
    /**
     * Résout l'opération booleean AND entre 2 booleean
     * @param lhs   Opérande gauche
     * @param rhs   Opérande droite
     * @return lhs AND rhs
    */
    bool execute(bool lhs, bool rhs) const;
};

#endif /* ANDMATRIX_H */

