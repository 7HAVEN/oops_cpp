#include<iostream>
using namespace std;

class Student
{
	public: 
		string name;
		int age;
		int year;
		char sec;
		int marks;
		
	    void Total_marks(Student *arr,int size );

};

void Total_marks(Student *arr,int size)
{
	int sum=0;

	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i].marks;
	}

	cout<<"Total Marks of the Students: "<<sum;
}

int main()
{
	Student arr[3];
	for(int i=0;i<3;i++)
	{
		cin>>arr[i].name>>arr[i].age>>arr[i].year>>arr[i].sec>>arr[i].marks;	
	}
	Total_marks(arr,3);

	return 0;
}
