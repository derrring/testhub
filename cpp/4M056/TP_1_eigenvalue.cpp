//
// Created by Sébastien Wong on 10/02/18.
//

#include <iostream>
#include <Eigen/Dense>
//How to install a third party library? here I use homebrew to install Eigen to '/usr/local/Celluar'
// which is not the folder that Cmake could cite
// so I create a symlink 'ln -s /usr/local/Cellar/eigen/3.3.4/include/eigen3/Eigen /usr/local/include/'

int main(){
    Eigen::Matrix<double,4,4>A;
    A << 1,2,3,4,1,-1,1,-1,4,3,2,1,1,-1,0,0;
    std::cout << " The determinant of matrix A "<< std::endl;
    std::cout << A.determinant() << std::endl;
    std::cout << " The inverse of A is " << std::endl;
    std::cout << A.inverse()<<std::endl;

    return 0;
}


