#include <iostream>
#include "School.h"
using namespace std;


void School::Major(Class& c){
	// a function that gives the major for students in a class in grade 10
	if (c.gradeNumber < 10){
		cout<<"Sorry , you can't get major yet"<<endl;
		return ;
	}
	else if ( c.gradeNumber>10){
		cout<<"You already have a major"<<endl;
		return ;
	}
	for (int i=0 ; i<20 ; i++){
		int A =c.students[i].getGrade(0)+c.students[i].getGrade(1)+c.students[i].getGrade(5)+c.students[i].getGrade(6);
		int S=c.students[i].getGrade(2)+c.students[i].getGrade(3)+c.students[i].getGrade(4)+c.students[i].getGrade(6);
		if(A>S)
			c.students[i].setMajor("Literature");
		else
			c.students[i].setMajor("scientific");
	}
}