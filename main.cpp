/*
	
	This project uses classes to represent a school and its facililties.  
	
	Group : Haneen  Al-Rafati , Merna Ammari , Ayah Al-Ramahi


*/
#include <iostream>
#include "Broadcast.h"
#include "FinancialAid.h"
#include "Book.h"
#include "School.h"
using namespace std;

int main (){
	School sch1;
	
	/////////////////////////////////////////////////////////
	
	for (int i=0 ; i<3 ; i++){
		sch1.staff.teachers[i].read();
		sch1.staff.teachers[i].print();
	}
	
	/////////////////////////////////////////////////////////

	
	int classesInSchool;
	cout<<"Enter the number of classes in school\n"; cin>>classesInSchool;
	for (int i=0 ; i<classesInSchool ; i++){
		sch1.classes[i].readClass();
		sch1.Major(sch1.classes[i]);
	}
	for (int i=0 ; i<classesInSchool ; i++){
		sch1.classes[i].printClass();
	}
	

	//////////////////////////////////////////////////////
	// list
	
	int booksInLibrary;
	cout<<"Enter number of books in library\n"; cin>>booksInLibrary;
	for(int i=0 ; i<booksInLibrary ; i++){
		Book b;
		b.readBook();
		sch1.lib.books.addtolast(b);
	}
	sch1.lib.books.print();
	

	////////////////////////////////////////////////////
	//queue
	
	Student s ;
	s.readStudent();
	sch1.financialAid.appendStudent(s);
	sch1.financialAid.frontStudent().printStudent();
	sch1.financialAid.serveStudent();
	
	/////////////////////////////////////////////////////////
	// stack

	int numberOfBuses;
	cout<<"Enter number of buses\n"; cin>>numberOfBuses;
	for(int i=0 ; i<numberOfBuses; i++){
		Bus b;
		cout<<"Enter bus ID\n"; cin>>b.busId;
		sch1.garageSchoolBus.push(b.busId);
	}
	cout<<"The order of buses leaving the school garage: \n";
	for(int i=0 ; i<numberOfBuses; i++){
		cout<<sch1.garageSchoolBus.gettop()<<endl;
		sch1.garageSchoolBus.pop();
	}

}