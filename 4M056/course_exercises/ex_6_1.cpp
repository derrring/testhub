//
// Created by Sébastien Wong on 08/04/18.
//

#include <iostream>
#include "ex_6_1.h"

void f(A a){std::cout << "f !" << std::endl;}
void g(A &a){std::cout << "g !" << std::endl;}
void h(A *a){std::cout << "h !" << std::endl;}
A r(){std::cout << "r !" <<std::endl; return A(17);}