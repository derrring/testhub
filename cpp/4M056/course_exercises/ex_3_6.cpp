//
// Created by Sébastien Wong on 23/02/18.
//

#include <iostream>
#include <random>
#include <ctime>
#include <cmath>
#include <fstream>
#include <vector>
#include <cstdlib>

int main(){
    std::srand(666);
    std::vector<double> V(std::rand()%50);
    for(int i=0; i<V.size();i++){
        V[i]=std::rand()/double(RAND_MAX);
        std::cout << "the number of elements is :" << V.size() << std::endl;

        int N = 0;

        std::cout << "the number of elements <= 0.5 is : " << N << std::end;

        double S = 0;

        std::cout << "the sum of all elements is : " << S << std::endl;
        std::cout << "the complete vector is : " << std::endl;
    }
}