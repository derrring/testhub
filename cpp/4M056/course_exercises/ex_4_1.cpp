//
// Created by Sébastien Wong on 24/02/18.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int f(){
    srand(time(NULL));
    return rand()%4;

}

int main(){
        for(int i=0; i<100; i++){std::cout<<f()<<std::endl;}

}