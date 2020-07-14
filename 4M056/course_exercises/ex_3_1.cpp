//
// Created by Sébastien Wong on 23/02/18.
//

#include <iostream>

int main(){
    unsigned int a = 8;
    unsigned int b =13;
    std::cout << "an outer subtraction: " << a-b << std::endl;

    int u = 100000;
    int v = u * u;

    std::cout << "an outer multiplication: " << v << std::endl;

    long long int uu = 100000;
    long long int vv = uu * uu;

    std::cout << " an outer multiplication" << vv << std::endl;
}