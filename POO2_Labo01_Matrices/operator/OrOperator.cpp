/* 
 * File:   OrOperator.cpp
 * Author: Jérémie Chatillon et James Smith
 * 
 * Created on 22 février 2018, 17:59
 */

#include "OrOperator.h"


using namespace std;

bool OrOperator::execute(bool rhs, bool lhs) const{
    return rhs || lhs;
}

