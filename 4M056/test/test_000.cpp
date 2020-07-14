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

int ecrire_immatriculation(std::ostream& flux, struct Immatriculation p){
    flux << p.debut1 << p.debut2;
    flux << p.milieu;
    flux << p.fin1 << p.fin2 << std::endl;
    return 0;

};

//交换两变量的值
void exchange(double& a, double& b){
    double c;
    c = a;
    a = b;
    b = c;
    return;
};


//计算数字n在整数向量V里出现了多少次
unsigned int occurrences(const vector<int>& V, int n){
    unsigned counter = 0;
    for (int i = 0; i < V.size() ; i++) {
        counter += (V[i]==n)?1:0;
    }
    return counter;
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

    ecrire_immatriculation(std::cout, paquet1);

    double  x = 2.71;
    double& ref = x; // ref是x的别名(alias)，&作为取地址符理解。
    //按值传递 和 按引用传递 ：C++的函数无法改变参数的值。每次调用函数都生成参数的值的拷贝，函数的block结束后再销毁拷贝占用的内存
    /*（假设参数变量储存了大数据，函数对参数的按值调用无法直接修改参数，而是每次调用生成参数的一个拷贝）*/
    /* 将参数按引用传递，一方面引用的值是参数变量的别名，只占据极少量的内存空间；
     * 另一方面，正因为引用的值是参数的名字，而参数的名字本身不需要修改，所以函数因此可以修改参数的值——因为参数的值不再受到“不可修改函数参数的值”的规则的保护*/

    //static: 函数执行完毕后关键字static后面的变量不会被销毁，可以继续被使用。
    return 0;
}
