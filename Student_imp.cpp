#include<iostream>
#include<string>
#include "Student.h"
using namespace std;

void Student::readStudent(){
	Person::read();
    int sum=0;
    cout<<"please enter the student ID:"<<endl;
    cin>>ID;
    cout<<"please enter 6 grades:"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>grades[i];
        sum+=grades[i];
    }
    avg= sum/6.0;
}
void Student::printStudent()const{
	Person::print();
    cout<<"The student ID:"<<ID<<endl;
    cout<<"Average= "<<avg<<endl;
	if (grade>=10) cout<<"Major :"<<major<<endl;
}
void Student::setID(int id){
    ID=id;
}
int Student::getID(){
    return ID;
}
Student::Student(string f,string m,string l,string nat,int snno,char g ,int d , int mo , int y , int id ):Person(snno,nat,f,m,l,d,mo,y,g){
    setID(id);
    for(int i=0;i<6;i++)
        grades[i]=0;
    avg=0;
}
int Student::getGrade(int ind ){
	return grades[ind];
}
void Student::setMajor(string m){
	major=m;
}

void Student::setGrade (int g){
	grade=g;
}