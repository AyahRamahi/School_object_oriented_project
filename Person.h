#include "Date.h"
#include "Name.h"
using namespace std ;

#ifndef person_h
#define person_h

class Person 
{
private :
	string nationality ;
	int SSNO;
	Date BD;
	char gender; 
public :
	Name name ;
	Person (int ssno=0,string nation="",string fi="" , string mi="",string la="" ,int d=1,int m=1,int y=1900,char g='-');
	void set (int ssno,string nation,string fi , string mi,string la ,int d,int m,int y,char g) ;
	void get (int & ssno,string & nation,string & fi , string & mi,string & la ,int & d,int & m,int & y,char & g)const;
	void read ();
	void print ()const ;
};

#endif