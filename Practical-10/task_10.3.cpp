#include<iostream>


using namespace std;

class Test
{
	private:
	int a,b;
	
	public:
	Test(int a,int b)
	{
		this->a = a;
		this->b = b;
	}
	
	void remainder()
	{
		int rem;
		rem = (a > b ? a%b : b%a);
	
		cout<<rem<<endl;
	}
};

int main()
{

	Test c1(23,3);
	c1.remainder();
	
	return 0;
}
