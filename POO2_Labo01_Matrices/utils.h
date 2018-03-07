/* 
 * File:   utils.h
 * Author: Jeremie
 *
 * Created on 3. mars 2018, 23:27
 */

#ifndef UTILS_H
#define UTILS_H

#include <time.h>

/**
 * Classe utilitaire mettant à dispostion diverses fonctions:
 *      Méthode1: Random
 *      Méthode2: Comming one day...
 */  
class Utils {
public:
    /**
     * Constructeur qui initalise le random
     */
    Utils();
    
    /**
     * Calcul un nombre aléatoire entre [0 à n - 1].
     * @param n   borne supérieur du nombre aléatoire (0 et 1 retournent 1.)
     * @return nombre aléatoire
     */
    static unsigned doRand(unsigned n);

private:
    // Nombre max du calcul pour la fonction doRand
    static const unsigned _RAND_MAX;
};

#endif /* UTILS_H */

