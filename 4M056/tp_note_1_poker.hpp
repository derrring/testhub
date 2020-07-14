//Jiongyi WANG
//3501689

#include <iostream>
#include <cmath>
#include <fstream>

class Carte
{
private:
	int n;
	
public:
	Carte();
	Carte(int n0);
	Carte(int c, int v);
	char couleur();
	int valeur() ;
	void affiche(std::ostream &flux) ;
	bool operator()(const Carte &c) const;
};


