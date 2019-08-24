#include "Person.h"
using namespace std;

#ifndef tacher_h
#define teacher_h
 

class Teacher:Person {
private :
    int id;
    Date employmentDate;
    int salary;
    string subject ;
public :
    Teacher (int i=0 , int s =0 , string sub="");
	void setId (int i);
	int getId () ;
	void setEmploymentDate (int a , int b , int c);
	Date getEmploymentDate () ;
	void setSalary (int s);
	int getSalary () ;
	void setSubject (string s);
	string getSubject () ;
	void read();
	void print() const;
	void setInfo (int i , int a, int b , int c , int s , string sub );
};

#endif