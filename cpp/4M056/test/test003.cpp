//
// Created by Sébastien Wong on 05/04/18.
//

#include <iostream>
#include <vector>

class Matrice{
private:
    unsigned int n;
    double* coeffs;

public:
    Matrice(unsigned N=1, double x = 0.);

    Matrice(std::vector<double > v );

    Matrice(const Matrice& M); //copy constructor


};