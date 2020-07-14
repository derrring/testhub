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
    std::string Debut("Les sanglots longs des violons de l'automne");
    std::string Fin("blessent mon coeur d'une langueur monotone");
    std::string Phrase = Debut + " " + Fin;
    std::cout << Phrase << std::endl;

    int pos = Phrase.find("automne"); // position of a substring is index by the first character of this substring.
    std::cout << pos << std::endl;
    Phrase[pos] = 'A';
    std::cout << Phrase << std::endl;
    int counter = 0;
    for(int i =0; i<Phrase.size();i++){
        if(Phrase[i]=='o'){counter++;}
    }
    std::cout << "Nombre de 'o : " << counter << std::endl;

    return 0;
}

