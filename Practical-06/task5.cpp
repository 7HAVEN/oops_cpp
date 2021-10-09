#include<iostream>
#include<string>
int main(){

     std::string x;
     std::string y;
     std::cin >> x;
     std::cin >> y;
     if(x.compare(y)==0){
        std::cout<<"equal string "<<std::endl;
        std::cout<<"value returned by function compare is: "<<x.compare(y)<<std::endl;}
     else if(x.compare(y)>0){
        std::cout<<"String a = "<< x <<"  is greater then b= "<< y <<std::endl;
        std::cout<<"value returned by function compare is: "<<x.compare(y)<<std::endl;}
      else{
        std::cout<<"string b = "<< y <<" is greater then a= "<< x <<std::endl;
        std::cout<<"value returned by function compare is: "<<x.compare(y)<<std::endl;}

     return 0;

}