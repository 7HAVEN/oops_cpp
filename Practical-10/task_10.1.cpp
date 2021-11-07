/*WAP to create a directory that contains the following information.
(a) Name of a person
(b) Address
(c) Telephone Number (if available with STD code)
(d) Mobile Number (if available)
(e) Head of the family*/
#include<iostream>
using namespace std;

class Directory
{
	public:
		string name;
		string ad;
    	long int pn;
		long int mn;
		string head;
};

int main(){

	Directory arr[3];
	
	for(int i=0;i<3;i++)
	{
		
		cin>>(arr[i].name);
	
		cin>>(arr[i].ad);
		
		cin>>arr[i].pn;
		
		cin>>arr[i].mn;
		
		cin>>(arr[i].head);
	}
	
	cout<<endl;
	
	
	for(int i=0;i<3;i++)
	{
		cout<<"Name: "<<arr[i].name<< endl;
		cout<<"Address: "<<arr[i].ad<< endl;
		cout<<"Phone Number: "<<arr[i].pn<< endl;
		cout<<"Mobile Number: "<<arr[i].mn<<endl;
		cout<<"Head of the family: "<<arr[i].head << endl;
		cout<<endl;
	}

	return 0;

}
	