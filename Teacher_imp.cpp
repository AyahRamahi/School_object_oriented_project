#include "Teacher.h"
#include <iostream>
using namespace std;


Teacher::Teacher (int i , int s  , string sub){
    id=i; salary=s; subject=sub;
}

void Teacher::setId (int i){
	id=i;
}

int Teacher::getId () {
	return id;
}

void Teacher::setEmploymentDate (int a , int b , int c){
        employmentDate.setDate(a , b ,  c); 
}

Date Teacher::getEmploymentDate () {
	return employmentDate;
}

void Teacher::setSalary (int s) {
	salary=s;
}

int Teacher::getSalary () { 
	return salary;
}

void Teacher::setSubject (string s) {
	subject=s;
}

string Teacher::getSubject () { 
	return subject;
}

void Teacher::read(){
	Person::read(); 
	cout<<"Enter teacher id:"<<endl; cin>>id;
	cout<<"Enter teacher salary:"<<endl; cin>>salary;
	cout<<"Enter teacher subject:"<<endl; cin>>subject;
	cout<<"Enter teacher employment date:"<<endl;
	employmentDate.read();
}

void Teacher::print() const{
	Person::print();
	cout<<"Teacher id:"<<id<<endl;
	cout<<"Teacher salary:"<<salary<<endl;
	cout<<"Teacher subject:"<<subject<<endl;
	cout<<"Teacher employment date:";
	employmentDate.print();
	cout<<endl;
}

void Teacher::setInfo (int i , int a, int b , int c , int s , string sub ){
	id=i;
	setEmploymentDate (a , b , c);
	salary=s;
	subject=sub;
	
}