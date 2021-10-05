#include<iostream>
namespace First{
    int add(int a ,int b){

        return a+b;
    }
}
namespace Second{
    float add(float a,float b){

        return a+b;
    }
}
int main(){
    std::cout << "using first namespace: "  << First::add(2.32f,2) << std::endl;
    std::cout << "using second namespace: " << Second::add(3.03333f,2) << std::endl;
    

    return EXIT_SUCCESS;
}