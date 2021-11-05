#include<iostream>
using namespace std;

class Student
{
	public:
	string name;
	int age,marks;
	
	
	friend void sum_marks(Student *arr,int size);
};

void marks(Student *arr, int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i].marks;
	}
	std::cout<<"total:" <<sum<<endl;
}

int main()
{
    
	Student arr[3];
	
	for(int i=0;i<3;i++)
	{
		std::cin>>arr[i].name>>arr[i].age>>arr[i].marks;
		
	}
	marks(arr,3);

	return 0;
}


