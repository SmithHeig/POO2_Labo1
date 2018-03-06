/* 
 * File:   randomOperator.h
 * Author: Jeremie
 *
 * Created on 6. mars 2018, 17:15
 */

#ifndef RANDOMOPERATOR_H
#define RANDOMOPERATOR_H

#include "Operator.h"

/**
 * Classe permettant de générer un boolean aléatoire
 * 
 */
class RandomOperator : public Operator{
public:
    /**
     * Calcul un boolean aléatoire
     * @param lhs   Pas utile dans la méthode mais on la laisse pour pouvoir effectuer de la surcharge
     * @param rhs   Pas utile dans la méthode mais on la laisse pour pouvoir effectuer de la surcharge
     * @return boolean aléatoire
     */
    bool execute(bool lhs, bool rhs) const;
};

#endif /* RANDOMOPERATOR_H */

