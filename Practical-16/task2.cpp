#include<iostream>

int main(){

    try{
        int a,b,c;
        std::cin >> a  >> b;
        if(b == 0){
            throw std::runtime_error("Divsion by zero");
        }
        c = a/b;
        std::cout << c << std::endl;
    }
    catch(std::exception e){
        std::cout << "Division by zero is not possible\n";
    }

    return 0;
}