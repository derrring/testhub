//
// Created by Sébastien Wong on 23/02/18.
//
#include <iostream>
#include <cmath>

double f(double x){x += M_PI;
    return x;}

double g(double &x){x += M_PI;
    return x;}


int main(){
    double a=1.0, b=1.0, c=1.0;
    std::cout<< f(a) << std::endl;
    std::cout<< a << std::endl;
    std::cout<< g(b) << std::endl;
    std::cout<< b << std::endl;

}