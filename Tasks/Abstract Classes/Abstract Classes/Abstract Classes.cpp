#include<iostream>

#include<fstream>
#include<math.h>

#include<conio.h>
using namespace std;

class shape
{
protected :
	double vol, area;
public:
	virtual void calcArea()=0;
	virtual void calcVol() =0;
	virtual void display() = 0;

};
class point : public shape
{
protected :
	double x, y;
public:
	point()
	{
		x = 0;
		y = 0;
	}
	point(double xa, double ya)
	{
		x = xa;
		y = ya;
	}
	void calcArea()
	{

	}
	void calcVol()
	{
	}
	void display() 
	{
		cout << "Your required things are as follow " << endl;
		cout << "the coordinates of the point are as follow -- x -- " << x << " -- y -- " << y <<endl;

	}

};




class circle: public point
{
protected :
	double r;
public:
	circle()
	{
		r = 0;
		x = 0;
		y = 0;
	}
	circle(double ri, double xi, double yi)
	{
		r = ri;
		x = xi;
		y = yi;

	}
	void calcArea()
	{
		area = 3.14 * 3 * r*r;
		
	}
	void calcVol()
	{
		vol = (4 / 3)*3.14*(r*r*r);
	}
	void display() {
	cout << "Your required things are as follow " <<endl;
	cout << "The area of the circle is as given  " << area << endl;
	cout << "The volume of the circle is as given  " << vol << endl;
	}


};

class cylinder:public circle
{
protected:
	double h;
public:
	cylinder()
	{
		r = 0;
		x = 0;
		y = 0;
		h = 0;
	}
	cylinder(double hi, double ri, double xi, double yi)
	{
		h = hi;
		x = xi;
		y = yi;
		r = ri;

	}

	void calcArea()
	{
		area = (2 * 3.14*r*h) + (2 * 3.14*(r*r));

	}
	void calcVol()
	{
		vol = 3.14*h*r*r;
	}
	void display()
	{
	cout << "Your required things are as follow " << endl;
	cout << "The area of the cylinder is as given  " << area <<endl;
	cout << "The volume of the cylinder is as given  " << vol <<endl;
	}




};


int main()
{
	point p(3 , 75);
	p.display();
	circle c(5, 45, 86);
	c.display();
	cylinder c1(12, 4, 45, 67);
	c1.display();




	return 0;
}