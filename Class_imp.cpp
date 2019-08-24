#include <iostream>
#include "Class.h"
using namespace std;
/*
Class:: Class (){
	length=0;
	gradeNumber=-1;
}
*/
void Class::readClass(){
	cout<<"Enter the number of students in the class\n"; cin>>length;
	cout<<"Enter the grade of the students in the class\n"; cin>>gradeNumber;
	for(int i=0 ; i<length ; i++){
		students[i].readStudent();
		students[i].setGrade(gradeNumber);
	}
}

void Class::printClass(){
	cout<<"The length of class: "<<length<<endl;
	cout<<"The grade of students in the class: "<<gradeNumber<<endl;
	for (int i=0 ; i<length ; i++){
		students[i].printStudent();
		cout<<endl;
	}
}