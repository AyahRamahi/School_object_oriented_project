#include <iostream >
#include "Student.h"
using namespace std;

#ifndef class_h
#define class_h
 
class Class
{
public :
	Student students [30];
	int length ;
	int gradeNumber;
	//Class ();
	void readClass();
	void printClass();
};

#endif