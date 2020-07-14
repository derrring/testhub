//Jiongyi WANG
//3501689

#include <random>
#include <fstream>
#include <ctime>
#include <iostream>



int main(){
	std::mt19937 G(time(NULL));
	std::uniform_int_distribution<int> Distribution(0,51);

	std::ofstream tirage;
	tirage.open("/Users/Jiongyi/CLionProjects/cpp_courses/tirage.txt",std::ios_base::out);
	
	if(tirage.is_open()){
		for(int i = 0; i<10; i++){
			tirage << Distribution(G)<< " ";
						
		}
		tirage << std::endl;
		tirage.close();
		}else{
			std::cout<<"failed "<<std::endl;}
		
		return 0;
	}
