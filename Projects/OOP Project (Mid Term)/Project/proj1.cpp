#include "pch.h"
#include "proj1.h"
#include<iostream>
#include<string>


using namespace std;



proj1::proj1()
{
	d = 1;
	m = 1;
}


proj1::proj1(int dd)
{

	if (dd > 365)
	{
		cout << "The number of days you entered are not for this year i.e. 2019  " << endl;
	}
	int mm = 1;
	while (dd > 31)
	{
		if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || m == 12) && dd > 31)
		{
			dd = dd - 31;
			mm++;
		}
		else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd > 30)
		{
			dd = dd - 30;
			mm++;
		}

		else if (mm == 2 && dd > 28)
		{
			dd = dd - 28;
			mm++;
		}
	}

	m = mm;
	d = dd;
	if (m > 12) {
		m = m - 12;
	}
	string month;
	switch (m)
	{
	case 1:
		month = "January";
		break;
	case 2:
		month = "Februray";
		break;
	case 3:
		month = "March";
		break;
	case 4:
		month = "April";
		break;
	case 5:
		month = "May";
		break;
	case 6:
		month = "June";
		break;
	case 7:
		month = "July";
		break;
	case 8:
		month = "August";
		break;
	case 9:
		month = "September";
		break;
	case 10:
		month = "October";
		break;
	case 11:
		month = "November";
		break;
	case 12:
		month = "December";
		break;

	}


	cout << month << " " << d << "  2019" << endl;
}



proj1::proj1(int dd, int mm)
{
	if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || m == 12) && dd <= 31)
	{
		m = mm;
		d = dd;

	}
	else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd <= 30)
	{
		m = mm;
		d = dd;

	}
	else if (mm == 2 && dd <= 28)
	{
		m = mm;
		d = dd;

	}
	else
	{
		cout << "The entered values are not legitimate. Please enter a correct value  " << endl;
		exit(EXIT_FAILURE);
	}
}





void proj1::setdate(int dd, int mm)
{

	if ((mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || m == 12) && dd <= 31)
	{
		m = mm;
		d = dd;

	}
	else if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && dd <= 30)
	{
		m = mm;
		d = dd;

	}
	else if (mm == 2 && dd <= 28)
	{
		m = mm;
		d = dd;

	}
	else
	{
		cout << "The entered values are not legitimate. Please enter a correct value  " << endl;
		exit(EXIT_FAILURE);
	}
}





void proj1::print()
{
	int calcd = 0;
	while (m > 1)
	{
		if (m == 5 || m == 7 || m == 10 || m == 12)
		{
			calcd = calcd + 30;
			m--;
		}
		else if (m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 11)
		{
			calcd = calcd + 31;
			m--;
		}

		else if (m == 3)
		{
			calcd = calcd + 28;
			m--;
		}
	}
	calcd = calcd + d;
	int w = 1;
	while (calcd > 7)
	{
		if (w == 1)
		{
			calcd = calcd - 6;
			w++;
		}
		else
		{
			calcd = calcd - 7;
			w++;
		}

	}
	string day;
	switch (calcd)
	{
	case 1:
		day = "Monday";
		break;
	case 2:
		day = "Tuesday";
		break;
	case 3:
		day = "Wednesday";
		break;
	case 4:
		day = "Thursday";
		break;
	case 5:
		day = "Friday";
		break;
	case 6:
		day = "Saturday";
		break;
	case 7:
		day = "Sunday";
		break;
	}


	cout << day << endl;
}




void proj1::plusday(int days1)
{
	int year = 2019;

	int mx = m;
	int calcd = 0;
	while (mx > 1)
	{
		if (mx == 5 || mx == 7 || mx == 10 || mx == 12)
		{
			calcd = calcd + 30;
			mx--;
		}
		else if (mx == 2 || mx == 4 || mx == 6 || mx == 8 || mx == 9 || mx == 11)
		{
			calcd = calcd + 31;
			mx--;
		}

		else if (mx == 3)
		{
			calcd = calcd + 28;
			mx--;
		}
	}
	calcd = calcd + d;
	int w = 1;
	while (calcd > 7)
	{
		if (w == 1)
		{
			calcd = calcd - 6;
			w++;
		}
		else
		{
			calcd = calcd - 7;
			w++;
		}

	}
	string day;
	switch (calcd)
	{
	case 1:
		day = "Monday";
		break;
	case 2:
		day = "Tuesday";
		break;
	case 3:
		day = "Wednesday";
		break;
	case 4:
		day = "Thursday";
		break;
	case 5:
		day = "Friday";
		break;
	case 6:
		day = "Saturday";
		break;
	case 7:
		day = "Sunday";
		break;
	}

	string month1;
	switch (m)
	{
	case 1:
		month1 = "January";
		break;
	case 2:
		month1 = "Februray";
		break;
	case 3:
		month1 = "March";
		break;
	case 4:
		month1 = "April";
		break;
	case 5:
		month1 = "May";
		break;
	case 6:
		month1 = "June";
		break;
	case 7:
		month1 = "July";
		break;
	case 8:
		month1 = "August";
		break;
	case 9:
		month1 = "September";
		break;
	case 10:
		month1 = "October";
		break;
	case 11:
		month1 = "November";
		break;
	case 12:
		month1 = "December";
		break;
	}
	int days = days1 + d;
	while (days > 31)
	{


		if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && days > 31)
		{
			m++;
			days = days - 31;

		}
		if ((m == 4 || m == 6 || m == 5 || m == 9 || m == 11) && days > 30)
		{
			m++;
			days = days - 30;

		}
		if (m == 2 && days > 28)
		{
			m++;
			days = days - 28;

		}

	}


	int	d3 = days;
	if ((d3 > 28) && m == 2)
	{
		m++;
		d3 = d3 - 28;
	}
	int d0 = d3;
	int m3 = m;
	int y1 = year;
	while (m3 > 12)
	{
		y1++;
	}

	string month2;

	int my = m3;
	int calcd1 = 0;
	while (my > 1)
	{
		if (my == 5 || my == 7 || my == 10 || my == 12)
		{
			calcd1 = calcd1 + 30;
			my--;
		}
		else if (my == 2 || my == 4 || my == 6 || my == 8 || my == 9 || my == 11)
		{
			calcd1 = calcd1 + 31;
			my--;
		}

		else if (my == 3)
		{
			calcd1 = calcd1 + 28;
			my--;
		}
	}
	calcd1 = calcd1 + d0;
	int w1 = 1;
	while (calcd1 > 7)
	{
		if (w1 == 1)
		{
			calcd1 = calcd1 - 6;
			w1++;
		}
		else
		{
			calcd1 = calcd1 - 7;
			w++;
		}

	}
	string day1;
	switch (calcd1)
	{
	case 1:
		day1 = "Monday";
		break;
	case 2:
		day1 = "Tuesday";
		break;
	case 3:
		day1 = "Wednesday";
		break;
	case 4:
		day1 = "Thursday";
		break;
	case 5:
		day1 = "Friday";
		break;
	case 6:
		day1 = "Saturday";
		break;
	case 7:
		day1 = "Sunday";
		break;
	}

	switch (m3)
	{
	case 1:
		month2 = "January";
		break;
	case 2:
		month2 = "Februray";
		break;
	case 3:
		month2 = "March";
		break;
	case 4:
		month2 = "April";
		break;
	case 5:
		month2 = "May";
		break;
	case 6:
		month2 = "June";
		break;
	case 7:
		month2 = "July";
		break;
	case 8:
		month2 = "August";
		break;
	case 9:
		month2 = "September";
		break;
	case 10:
		month2 = "October";
		break;
	case 11:
		month2 = "November";
		break;
	case 12:
		month2 = "December";
		break;

	}


	cout << days1 << " Days after " << day << ", " << month1 << " " << d << "," << year << " is " << day1 << ", " << month2 << " " << d3 << ", " << y1 << endl;

}
