#include<iostream>

void swap(int a ,int b){
    int temp = a;
    a  = b;
    b = temp;
    
    std::cout << "a = " <<a <<std::endl;
    std::cout << "b = " <<b <<std::endl;

}


void swapVal(int *a ,int *b){
    int* temp = a;
    a  = b;
    b = temp;
    std::cout << "a = " << *a <<std::endl;
    std::cout << "b = " << *b <<std::endl;

}

int main(){
    int a = 10;
    int b = 20;
    swap(a,b); // call by value 
    swapVal(&a,&b);  // call by refrence


    return 0;
}