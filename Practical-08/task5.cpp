#include<iostream>
int factorial(int n , int fac){
    if(n < 2){
        return fac;
    }
    else {
        fac  *= n;
        return factorial(n-1, fac);
    }    
}


int main(){
    int n;
    std::cin >>  n;
    std::cout << factorial(n,1) << std::endl;


    return 0;
}