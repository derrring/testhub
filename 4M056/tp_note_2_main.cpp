//Jiongyi WANG 3501689
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <fstream>
#include "tp_note_2_youngtab.hpp"



int main{
	//Question 4
    std::ofstream diagrammes;
    diagrammes.open("/Users/Jiongyi/diagrammes.dat",std::ios_base::out);
    if(diagrammes.is_open()){
        std::cout << "File open successful" << std::endl;
		Youngdiag MyDiag();
		/* ...*/
		
        std::cout << "Finished writing to file, will close now..." << std::endl;

        diagrammes.close();
    }
    else{
        std::cout << "File open failed" << std::endl;
    }


return 0;
}
