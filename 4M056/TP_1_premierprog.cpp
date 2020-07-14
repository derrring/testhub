//
// Created by Sébastien Wong on 30/01/18.
//instead of gcc, g++ links with libraries automatically.
//g++-7 TP_1_premierprog.gcc -o premierprogexerc

#include <iostream>
#include <cmath>

double area_of_circle(double x){
    return M_PI*x*x;
}

int main(){
    double radius;
    std::cout << "Please enter a wanted value of radius:"<<std::endl;
    std::cin >> radius;
    std::cout << "The area of the circle with radius "<< radius
              << " is "<< area_of_circle(radius)<<std::endl;
    return 0;
}
