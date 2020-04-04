#include "pch.h"
#include <iostream>
using namespace std;
class point {
private:
	
protected:
	double x, y;
public:
	
	
	point()
	{
		x = 0;
		y = 0;
	}
	
	point(int x1,int y1)
		{
			x = x1;
			y = y1;
	}
	double getX() {
	
		return x;
	}
	double getY() {
		
		return y;
	}
	
	
	void setX() {
		double xco;
		cout << "enter the value of X" << endl;
		cin >> xco;
		x = xco;
	}

    void setY() {
		double yco;
		cout << "enter the value of Y" << endl;
		cin >> yco;
	y = yco;
}

	friend ostream & operator<<(ostream &out,const point &obj);
};
class circle :public point {
private:
	double r;
public:
	circle() {
		r = 0;
		x = 0;
		y = 0;

	}
	circle(int r1, point & obj)
	{
		r = r1;
		x = obj.getX();
		y = obj.getY();
		cout << x << " " << y << " " << r << endl;

	}
	circle(int r2, int x1, int y1)
	{
		r = r2; x = x1;
		y = y1;
	}
	double getR() {
		cout << "enter the value of radius" << endl;
		double rco;
		cin >> rco;
		return rco;
	};
	void setR() {
		r = getR();
		cout << r;
	};
	double circum()
	{
		double cir;
		cir = 2 * r*3.14;
		return cir;
	}
};


  ostream & operator<<(ostream &out,const point &obj)
{
	out << "The cordinates are  " << "(" << obj.x << "," << obj.y << ")" << endl;


	return out;
};

int main()
{
	point obj;
	obj.setX();
	obj.setY();
	cout << obj;
	circle c1(3,obj);
	cout << c1.circum();


	return 0;
}
