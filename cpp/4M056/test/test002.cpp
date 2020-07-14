//
// Created by Sébastien Wong on 01/04/18.
//


#include <iostream>
#include "test002.h"


//constructor: create an n*n matrix with each element = x
Matrice::Matrice(unsigned int N, double x) {
    n = N;
    coeffs = new double[n*n];
    for(unsigned int i=0; i<n*n;i++){coeffs[i] = x;}
}

//copy constructor
Matrice::Matrice(const Matrice& copysource){
    this->n = copysource.n;
    this->coeffs = new double[n*n];
    for(unsigned int i=0; i<n*n; i++){
        thiaas->coeffs[i]= copysource.coeffs[i]
    }

}


//destructor
Matrice::~Matrice() {delete[] coeffs;}

// ???
double& Martice::operator()(unsigned int i, unsigned int j){
    return  coeffs[n*(i-1)+(j-1)];
}

//
double Matrice::trace() const {
    double t = 0;
    for(unsigned int i = 0; i<n; i++ ){
        t+= this -> coeffs[i*n+i];
    }
}



