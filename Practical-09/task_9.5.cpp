/* 
1. By default, all the members of the structure are public. while members of the class are private.
2. The structure will automatically initialize its members. while constructors and destructors are used to initialize the class members.
3. When a structure is implemented, memory allocates on a stack. but memory is allocated on the heap in class.
4.Variables in a structure cannot be initialized during the declaration, but they can be done in a class.
5.There can be no null values in any structure member. On the other hand, the class variables may have null values.
A structure is a value type, while a class is a reference type.
*/

#include<bits/stdc++.h>
using namespace std;

class College
{
	int x;//By default x is private
};

struct student
{
	int a;//by default a is public
};

int main()
{
	College t;
	student y;
	
	t.x=20; //this will give compilation error   

	y.a=30;//this will work fine

	return 0;
}
