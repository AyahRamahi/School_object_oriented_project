#include <iostream>
#include <string>
#include "Staff.h"
#include "Class.h"
#include "Library.h"
#include "FinancialAid.h"
#include "Broadcast.h"
#include "Garage.h"
using namespace std;

#ifndef School_h
#define School_h

class School 
{
public :
	void Major(Class& c);
	Staff staff;
	Class classes [40];
	Library lib;
	FinancialAid financialAid ;
	Broadcast broadcast;
	Garage garageSchoolBus ;
};
#endif