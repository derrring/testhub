#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
/*
int main() {
    std::ofstream Fichier;
    Fichier.open("/Users/Jiongyi/CLionProjects/cpp_courses/test/test_io.txt",std::ios_base::out);
    if(Fichier.is_open()){
        std::cout << "File open successful" << std::endl;

        Fichier << "My first text file! " <<  std::endl;
        Fichier << "Hello, file! " << std::endl;

        std::cout << "Finished writing to file, will close now..." << std::endl;

        Fichier.close();
    }
    else{
        std::cout << "File open failed" << std::endl;
    }
    return 0;
}



class Human{
private:
    std::string Name;
    int Age;

public:

    Human(){
        Age = 0; // initialized to ensure no junk value
        std::cout << "Constructed an instance of class Human " << std::endl;
    }
    //overload constructor that takes name
    Human(std::string HumansName){
        Name = HumansName;
        Age = 0;
        std::cout << "Overloaded constructor creates " << Name << std::endl;
    }
    //overload constructor to take age and name
    Human(std::string HumansName, int HumansAge){
        Name = HumansName;
        Age = HumansAge;
        std::cout << "Overloaded constructor creates ";
        std::cout << Name << " of" << Age << " years"<< std::endl;
    }


    void SetName(std::string HumansName){
        Name = HumansName;
    }

    void SetAge(int HumansAge){
        Age = HumansAge;
    }
    void IntroduceSelf(){
        std::cout << "I'm " + Name << " and am ";
        std::cout << Age << " years old. " << std::endl;
    }
};

int main(){
    Human FirstMan;
    FirstMan.SetName("Adam");
    FirstMan.SetAge(30);

    Human FirstWoman("Eve");
    FirstWoman.SetAge(28);

    Human FirstChild("Rose",1);

    FirstMan.IntroduceSelf();
    FirstWoman.IntroduceSelf();
    FirstChild.IntroduceSelf();
}
/////////////////////////////////////////////////////// */
int main(){
    std::string s("12345");
    std::cout<< s[0] <<std::endl;
    return 0;
}
