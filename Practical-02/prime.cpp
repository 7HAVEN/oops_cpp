#include<iostream>

bool isPrime(int num){
    for(int i = 2;i<num/2;i++){
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