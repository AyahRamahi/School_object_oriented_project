#include <iostream>
#include"Date.h"
using namespace std;

Date ::Date (int d ,int m ,int y)
{
	setDate (d,m,y);
}
void Date ::setDate(int d ,int m ,int y )
{
	day = d;
	month = m;
	year = y;
}
void Date ::getDate (int &d,int &m,int &y) const 
{
	d = day;
	m = month ;
	y = year ;
}

void Date ::read ()
{
	cin>>day ;
	cin>>month ;
	cin >>year ;
}
void Date :: print () const 
{
	cout <<day <<"/"<<month <<"/"<<year <<endl ;
}
