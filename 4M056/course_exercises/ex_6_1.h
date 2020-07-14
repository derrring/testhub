//
// Created by Sébastien Wong on 08/04/18.
//

#ifndef CPP_COURSES_EX_6_1_H
#define CPP_COURSES_EX_6_1_H
class A{
protected:
    int n;

public:
    A():n(0){
        std::cout << "default constructor";
    }

    A(int p):n(p){
        std::cout << "constructor with n= " << p << "\n";
    }

    A(const A& a):(a.n){
        std::cout << "deep copy with n= " << n << std::endl;
    }

    ~A(){
        std::cout << "destructor with n= " << n << std::endl;
    }

    int operator()()const { return n;}

    void add(int q){ n += q;}

};

#endif //CPP_COURSES_EX_6_1_H
