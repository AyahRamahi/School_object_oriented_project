#include <iostream>
#include "Manager.h"
using namespace std;

Manager::Manager (int s){
        salary=s;
}

void Manager::setSalary (int s) {
    salary=s;
}

int Manager::getSalary () {
    return salary;
}

Date Manager::getEmploymentDate () {
    return employmentDate;
}

void Manager::setEmploymentDate (int a , int b , int c){
        employmentDate.setDate (a , b , c);
}

void Manager::read(){
    Person::read();
    cout<<"Enter manager salary :"<<endl; cin>>salary;
    cout<<"Enter manager employment date"<<endl;
    employmentDate.read();
}

void Manager::print ()const{
    Person::print();
    cout<<"Manager salary :"<<salary<<endl;
    cout<<"Manager employment date:";
	employmentDate.print();
	cout<<endl;
}
