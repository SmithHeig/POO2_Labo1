/* 
 * File:   AndMatrix.cpp
 * Author: Jérémie Chatillon et James Smith
 * 
 * Created on 22 février 2018, 17:59
 */

#include "AndOperator.h"

bool AndOperator::execute(bool lhs, bool rhs) const{
    return lhs & rhs;
}

