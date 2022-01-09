#include<iostream>


template <typename T>
T add(T a , T b) {
    return(a + b);
}
template <typename X , typename Y ,typename Z>

Z addtion(X a , Y b) {
    return(a + b);
}
int main(){
    std::cout << add<int>(4,6) << std::endl;
    std::cout << addtion<int,float,double>(3,3.5f) << std::endl;
    return 0;

}