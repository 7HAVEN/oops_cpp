#include<iostream>
#include<fstream>

int main(){
    std::ifstream file;
    char word;
    file.open("test.txt",std::ios::in);
    std::ofstream output;
    output.open("write.txt",std::ios::app);
    while (file >> word) {
        output  << word;
        std::cout << word;
    

    }
    file.close();

}