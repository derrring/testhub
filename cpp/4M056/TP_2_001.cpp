//
// Created by Sébastien Wong on 20/02/18.
//

#include <iostream>
#include <random>
#include <ctime>
#include <cmath>
#include <Eigen/Dense>

float p = 0.3;
const int N = 30;

//std::mt19937 G(time(NULL)); //G is a generator
//std::bernoulli_distribution U(p); //U is a r.v. of Bernoulli distribution with parameter p.
//to generate an r.v. \sim Bernoulli(p)
//use U(G)

void bernoulli_random_fill(Eigen::Matrix<double,N,N> &K, float p) {
    std::mt19937 G(time(NULL));
    std::bernoulli_distribution U(p);
    auto X = std::bind(U,G);
    for (int i=0; i<N; i++)
    {
        K(i,i) = 0; // On remplit la diagonale
        for (int j=0; j<i; j++)
        {
            // On remplit les coefficients hors-diagonaux par des
            // variables de Bernoulli, de façon symétrique
            K(i,j) = X();
            K(j,i) = K(i,j);
        }
    }
}

int main(){
    Eigen::Matrix<double, N, N> K;
    bernoulli_random_fill(K, p);
    Eigen::Matrix<double, N, N> F;
    F = K;
    Eigen::Matrix<double, N, N> F_10 = K;
    for(int i=0;i<20;i++){

        F *= K;
        if(i==10){F_10 = F;}
    }

    std::cout << F_10 << std::endl;
    std::cout << F << std::endl;

    int SAMPLES=10000;
    double step=0.02;
    int count;
    double x;

    for(int i=0; i<SAMPLES; i += setp){
        count = 0;
        for (int i = 0; i < SAMPLES; i++)
        {
            bernoulli_random_fill(K,p);
            count += (K*K*K).trace()/6;
        }
        x =double(count)/double(SAMPLES);
        std::cout << p << " " << x << std::endl;
    }

    return 0;
}