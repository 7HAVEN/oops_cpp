#include<iostream>
int series(int n,int i){
    if(i  <= 2){
        std::cout << i  << std::endl;
        return series(n,i+1);        
    }
    else if(i == n){
        std::cout << i << " (" << i << "^" << i << " + " << i << " ) " << std::endl;
        return 0;

    }
    else{
        std::cout << i << " (" << i << "^" << i << " + " << i << " ) " << std::endl;
        return series(n,i+1);        

    }
}

int main(){
    series(6,2);

    return 0;
}