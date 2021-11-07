//WAP to create print or display Student information containing in Student class by using pointers to object.

#include <iostream>
#include <string>
/* local variable is same as a member's name */
class Student
{
private:
    std::string name;
    int age,roll_no;

public:
    void set(std::string name, int age ,int roll)
    {

        this->name = name;
        this->age = age;
        this->roll_no = roll;
    }
    void details() { 
        std::cout << "Name:" << name << "\n" << "Age: " << age << "\n" << "Roll Number: " << roll_no << std::endl;
        }
};

int main()
{
    Student s;
    int age = 20;
    std::string name = "Rome";
    int roll = 543;
    s.set(name, age, roll);
    s.details();
    return 0;
}
