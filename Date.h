#include <string>
using namespace std;

#ifndef date_h
#define date_h

class Date {
private :
	int day;
	int month ;
	int year ;
public :
	Date (int d=1 ,int m=1 ,int y=1900);
	void setDate(int d,int m ,int y );
	void getDate (int &d,int & m,int &y) const ;
	void read ();
	void print ()const ;
};

#endif