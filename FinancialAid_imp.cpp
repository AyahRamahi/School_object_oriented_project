#include <iostream>
#include "FinancialAid.h"
using namespace std;

FinancialAid::FinancialAid (){
    studentsApplied=0;
    front_=0;
    back_=-1;
}

Student FinancialAid::frontStudent (){
    cout<<"Student at the front of financial aid queue :"<<endl;
    return students[front_];
}

Student FinancialAid::serveStudent(){
    Student temp;
    if (studentsApplied==0){
        cout<<"Financial aid queue is empty ;\n";
        return temp;
    }
	cout<<"A student got a financial Aid\n";
    studentsApplied--;
    temp = students[front_];
    front_ = (front_+1)%100;
    return temp;
}

void FinancialAid::appendStudent(Student s){
    if (studentsApplied==100) {
        cout<<"Financial aid queue is full . Get back later\n";
        return ;
    }
	cout<<"Student added to financial aid\n";
    studentsApplied++;
    back_=(back_+1)%100;
    students[back_]=s;
}