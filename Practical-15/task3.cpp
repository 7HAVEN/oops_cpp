#include<iostream>
#include<fstream>
#include <iomanip>  

int main(){
    std::string data;
    std::ifstream file;
    char word;
    file.open("test.txt",std::ios::in);
    
    std::ofstream output;
    output.open("write.txt");
    while (file>> std::noskipws >> word) {
        output  << word;
        std::cout << word;
    
    }
    float a = 1.1234f;
    std::cout << "a = " << a <<"\n" << std::flush;
    std::cout << "round off a = " << std::setprecision(3) << a << std::endl;

    file.close();
    output.close();
}