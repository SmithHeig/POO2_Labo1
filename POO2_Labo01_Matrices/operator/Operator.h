/* 
 * File:   Operator.h
 * Author: james
 *
 * Created on 22 février 2018, 17:55
 */

#ifndef OPERATOR_H
#define OPERATOR_H


/**
 * Classe mettant à disposition une méthode abstraite (virtual) qui retroune un résultat booléean.
 */
class Operator{
public:
    /**
     * Méthode abstraite (virtual) permettant d'excuter une opération et d'obtenir un résultat boolean
     * @param lhs   Opérande gauche
     * @param rhs   Opérande droite
     * @return résutltat d'une opération.
    */
    virtual bool execute(bool lhs, bool rhs) const {};
};

#endif /* OPERATOR_H */

