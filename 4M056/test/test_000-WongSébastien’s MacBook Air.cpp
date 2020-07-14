//
// Created by Sébastien Wong on 2019-04-05.
//

#include <iostream>


enum Arc_en_ciel {rouge,orange,jaune,vert,bleu,indigo,violet};

struct Immatriculation {
    char debut1, debut2;
    int milieu;
    char fin1, fin2;
};

void ecire_immatriculation(std::ostream& flux, struct Immatriculation p){
    flux << p.debut1 << p.debut2 << " ";
    flux << p.milieu << " ";
    flux << p.fin1 << p.fin2 << std::endl;
    return;
}

void echange(double & a, double & b) {
    double c=a;
    a=b;
    b=c;
    return;
};

int main(){
    Arc_en_ciel espoire = bleu;
    std::cout<<"le couleur d'espoire: "<<espoire <<std::endl;

    struct Immatriculation paquet1;
    paquet1.debut1 = 'A';
    paquet1.debut2 = 'Z';
    paquet1.milieu = 24;
    paquet1.fin1   = 'H';
    paquet1.fin2 = 'C';

    ecire_immatriculation(std::cout, paquet1);

    double  x = 2.71;
    double& ref = x; // ref是x的别名(alias)，&作为取地址符理解。

    double a =1;
    double b = 2;
    std::cout<<"a = " << a << " b = " << b << std::endl;
    echange(a,b);
    std::cout<<"a = " << a << " b = " << b << std::endl;

    return 0;
}