//
// Created by Sébastien Wong on 19/02/18.
//

#include <iostream>
#include <fstream>
#include <vector>

int main(){
    int n;
    std::cout << "Please enter a number < 100" << std::endl;
    std::cin >> n;
    std::vector<int> tableau(n);

    for(i=0;i<n;i++){
        tableau[i]=i*i;
    }

    std::ofstream file1("./data/TP1/donnees.dat")
}