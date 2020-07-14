//Jiongyi WANG
//3501689

#include "tp_note_1_poker.hpp"
#include <string>

Carte::Carte(){
	 n=0;
	}

Carte::Carte(int n0){
	n = n0;
	}

Carte::Carte(int c, int v){
	n = 4*v +c;
}


char Carte::couleur(){
	const int c = n%4;
	char couleur_affichage[] = {'a','b','c','d','\0'};
	return couleur_affichage[c];
	
	}

int Carte::valeur(){
	const int v = (n-n%4)/4;
	std::string valeur_affichage_2("VDR");
	if(v<9){
		 return v+1;
				}else{
				return valeur_affichage_2[v-10];
				}
				 
	}

/*
void Carte::affiche(std::ofstream &flux){
	flux<< valeur() << couleur() << std::endl;
	
}
*/


int main(){
	//std::ostream flux;
	//flux.open("/Users/Jiongyi/CLionProjects/cpp_courses/flux.txt",std::ios_base::out);
	Carte trial1;
	std::cout << trial1.valeur()<<trial1.couleur()<<std::endl;
	return 0;
	}
