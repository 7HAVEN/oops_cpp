#include<bits/stdc++.h>
using namespace std;

class Students{

	public:
		int rollno;
		long long int pn;
		string address;
};

int main()
{
	Students Sam;
	Students John;

	John.rollno= 4532;
	Sam.rollno= 5435;
	Sam.pn = 2452435543;
	John.pn= 4352439543;
	Sam.address="some street,god knows where,India";
	John.address="12th  bell road,Mumbai,India";
    cout << "Sam Roll Number:  " << Sam.rollno << endl;
    cout << "Sam Phone Number:  " << Sam.pn << endl;
	cout<<"Sam's Address:  " <<Sam.address << "\n\n";
    
	cout << "John Roll Number:  " << John.rollno << endl;
    cout << "John  Phone Number:  " << John.pn << endl;
		cout<<"John's Address:  "<<John.address<<endl;
	return 0;
}
