/* 
 * File:   XorMatrix.cpp
 * Author: Jérémie Chatillon et James Smith
 * 
 * Created on 22 février 2018, 17:59
 */

#include "XorOperator.h"
bool XorOperator::execute(bool lhs, bool rhs) const{
    return lhs ^ rhs;
}
