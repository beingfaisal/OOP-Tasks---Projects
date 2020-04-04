
#include "pch.h"
#include <iostream>
using namespace std;
class int2;
class int1 {
private:
	int a;
public:
	void	set()
	{
		cout << "Enter The Value of integer" << endl;
		cin >> a;

	}
	void  display() {

		cout << "The Number is    " << a << endl;



	}


	friend void swap(int1* obj1, int2* obj2);
};
class int2 {
private:
	int b;
public:
	void	set()
	{
		cout << "Enter the Value of integer" << endl;
		cin >> b;

	}
	void  display() {
		 
		cout << "The Number is    " << b << endl;



	}


	friend void swap(int1* obj1,int2* obj2);
};
void swap(int1* obj1, int2* obj2)
{
	int t;
	t = obj1->a;
	obj1->a = obj2->b;
	obj2->b = t;
	//cout << "The 1st Number after Swapping is  " << obj1.a <<endl<< "The 2nd Number after Swapping is  " << obj2.b << endl;




}
		
		
int main()
{
	int1 obj1;
	int2 obj2;
	obj1.set();
	obj2.set();
	obj1.display();
	obj2.display();

	swap(&obj1 , &obj2);
	obj1.display();
	obj2.display();
	return 0;




}