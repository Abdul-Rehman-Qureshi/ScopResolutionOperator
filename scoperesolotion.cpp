// C++ program to show that scope resolution operator :: is
// used to define a function outside a class
//#include <iostream>
//using namespace std;
// 
//class A {
//public:
//    // Only declaration
//    void fun();
//};
// 
//// Definition outside class using ::
//void A::fun() { cout << "fun() called"; }
// // return type class name :: function name
//int main()
//{
//    A a;
//    a.fun();
//    return 0;
//}

// C++ program to show that :: can be used to access static
// members when there is a local variable with same name
#include<iostream>
using namespace std;

class Test
{
	static int x;
	static int z;
public:
	static int y;

	// Local parameter 'x' hides class member
	// 'x', but we can access it using ::
	void func(int x)
	{
	// We can access class's static variable
	// even if there is a local variable
	cout << "Value of static x is " << Test::x;

	cout << "\nValue of local x is " << x;
	cout << "value of static int z is " << Test::z;
	}
};

// In C++, static members must be explicitly defined
// like this
int Test::x = 1;
int Test::y = 2;
int Test::z=987654;

int main()
{
	Test obj;
	int x = 3 ;
	obj.func(x);

	cout << "\nTest::y = " << Test::y;
	
	return 0;
}

