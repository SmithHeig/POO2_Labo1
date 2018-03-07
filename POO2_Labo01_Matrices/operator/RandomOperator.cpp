/* 
 * File:   RandomOperator.cpp
 * Author: Jérémie Chatillon et James Smith
 * 
 * Created on 6. mars 2018, 17:15
 */

#include "Operator.h"
#include "../Utils.h"
#include "RandomOperator.h"

bool RandomOperator::execute(bool lhs, bool rhs) const{
    return (bool) Utils::doRand(2);
}
