#include<iostream>

class Quad 
{
	public:
  	    int a;
        int b;
	    Quad(int a,int b){
            this->a = a;
            this->b = b;
        }
        Quad(int a){
            this->a = a;
            this->b =  a;
        }
        void area(){
            std::cout << "area is: "<< this->a *  this->b << std::endl;
        }
    
};

int main()
{
	Quad sq(3);
    Quad rec(4,3);
	sq.area();
    rec.area();
	return 0;
}


