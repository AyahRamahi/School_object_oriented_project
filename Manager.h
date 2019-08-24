#include "Person.h"
using namespace std;

#ifndef manager_h
#define manager_h
 
class Manager:Person{
private :
    int salary ;
    Date employmentDate ;
public :
    Manager (int s=0);
    void setSalary (int s);
    int getSalary () ;
    Date getEmploymentDate ();
    void setEmploymentDate (int a , int b , int c);
    void read();
    void print ()const;
};

#endif