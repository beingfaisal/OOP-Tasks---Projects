#include "pch.h"

#include <iostream>
using namespace std;

class A {
private: int num1;
protected:
	int num2=10;
	
	
public:
	int num3;
	void rog()
	{
		cout << "the best pc in world" << endl;


	}
	

	void input()
	{
		cout << "enter" << endl;
		
	}
	void display()
	{
		cout << "Number 1: " << num1 << endl;
		cout << "Number 2: " << num2 << endl;
		cout << "Number 3: " << num3 << endl;
	}
};
class B
{
private:
	int num4;
public:
	void input()

	{
		cout << "enter" << endl;
		

	}

	void display()
	{
		 
		
		
	}
};
class C :public A,public B {

};
int  main()
{

	C obj1;

	obj1.A::display();
	//cout << obj.num2 << endl;

	
	return 0;
}
