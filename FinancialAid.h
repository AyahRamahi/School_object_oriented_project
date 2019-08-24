#include "Student.h"
using namespace std;

#ifndef financialAid_h
#define financialAid_h
 
class FinancialAid {
	// an example of a queue
public :
	FinancialAid ();
	Student frontStudent ();
	Student serveStudent();
	void appendStudent(Student s);
private :
	Student students[100];
	int studentsApplied , front_ , back_;
};

#endif