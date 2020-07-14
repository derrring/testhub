//
// Created by Sébastien Wong on 23/02/18.
//

#include <iostream>
#include <random>
#include <ctime>
#include <cmath>
#include <fstream>
#include <vector>

int main(){

    //save the square numbers from 0~100
    std::ofstream squarenumber;
    squarenumber.open("/Users/Jiongyi/CLionProjects/cpp_courses/course_exercises/squarenumber.dat",std::ios_base::out);
    if(squarenumber.is_open()){
        int index = 100;
        for(int i = 0; i<= index; i++){
            squarenumber << "the square of " << i << " is " << i*i << std::endl;
        }

        squarenumber.close();
    } else{
        std::cout << "File create failed! " << std::endl;
     }

    //Eratosthenes or Miller–Rabin primality test

/*
    //save the primer numbers from 1~1000
    // using bool isPrimer() to judge...
    std::ofstream primernumber;
    primernumber.open("/Users/Jiongyi/CLionProjects/cpp_courses/course_exercises/primernumber.dat",std::ios_base::out);
    if(primernumber.is_open()){
        std::vector<int> primerlist;
        int n = 1000;
        int index = ceil(n.sqrt());
        for(int i = 0; i<= index; i++){
            squarenumber << "the square of " << i << " is " << i*i << std::endl;
        }

        primernumber.close();
    } else{
        std::cout << "File create failed! " << std::endl;
    }


    return 0;
}
*/