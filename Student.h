#include "Person.h"
using namespace std;

#ifndef student_h
#define student_h

class Student:Person{
private:
    int ID;
    int grades[6];
    double avg;
	string major;
	int grade;
 
public:
	void setGrade (int g);
	void setMajor(string m);
	int getGrade(int ind );
    int Class;
    void readStudent();
    void printStudent()const;
    void setID(int id);
    int getID();
    Student(string f="",string m="",string l="",string nat="",int snno=0,char g =' ',int d=1 , int mo=1 , int y=1900 , int id=0 );
 };

#endif