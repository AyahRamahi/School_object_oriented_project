#include <iostream >
#include "person.h"
using namespace std ;

Person ::Person (int ssno,string nation,string fi , string mi,string la ,int d,int m,int y,char g):BD(d,m,y)
{
	name.first=fi;
	name.middle= mi;
	name.last=la;
	gender = g;
	SSNO =ssno;
	nationality = nation ;
}

void Person ::set (int ssno,string nation,string fi , string mi,string la ,int d,int m,int y,char g)
{
	BD.setDate(d,m,y);
	name.first=fi;
	name.middle= mi;
	name.last=la;
	gender = g;
	SSNO =ssno;
	nationality = nation ;
}

void Person ::get (int & ssno,string & nation,string & fi , string & mi,string & la ,int & d,int & m,int & y,char & g)const
{
	BD.getDate(d,m,y);
	fi=name.first;
	mi=name.middle;
	la=name.last;
	g=gender;
	ssno=SSNO;
	nation = nationality ;
}

void Person ::read ()
{
	cout <<"please enter the birth date : "<<endl;
	BD.read();
	cout <<"please enter the name  : "<<endl ;
	cin>>name.first>>name.middle>>name.last;
	cout<<"please enter gender , ssno , nationality : "<<endl;
	cin >>gender >>SSNO>>nationality ;
}

void Person ::print ()const 
{
	cout << "birth date : " ;
	BD.print();
	cout <<"name : "<<name.first<<" "<<name.middle<<" " <<name.last<<endl;
	cout <<"gender : " <<gender <<endl;
	cout<<"SSNO : "<<SSNO <<endl;
	cout <<"nationality : "<<nationality <<endl;
}
