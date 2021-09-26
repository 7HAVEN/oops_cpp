#include<iostream>

bool isPrime(int num){
    if(num==1) return false;
    for(int i = 2;i*i<num;i++){
        if(num % i == 0 && num != i)  return false; 
    }
    return true;
}


int main(){

    int n;
    std::cin >> n;
    std::cout << (isPrime(n) ? "its a prime number":"No its not a prime number");

 
    return EXIT_SUCCESS;    
}