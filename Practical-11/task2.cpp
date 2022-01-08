#include<iostream>
#include<string>
class Mammals{
    public:
        int weight;
        int height;
        std::string species;
    void display(){
        std::cout << "I am a Mammal\n";
    }
};
class Marine_Animals{
    public:
        int fins;
        std::string species;
    void disp(){
        std::cout << "I am a Marine Animal\n";
    }
};

class BlueWhale:public Mammals,public Marine_Animals{
    public:
        void display2(){
            std::cout << "I am Both the categories: Mammals and Marine animals\n";
        }
};

int main(){
    
    Mammals objM;
    Marine_Animals objMarine;
    BlueWhale objWhale;
    
    objM.display();
    objMarine.disp();
    objWhale.display2();
    
    objWhale.display(); // object of mammal class
    objWhale.disp(); // object of marine_animals class


    return 0;
}