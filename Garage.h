#include "Bus.h"
const int garageSize=10;

#ifndef garage_h
#define garage_h
 
class Garage
{
public:
	// example of stack
    Garage();
    bool isempty() const;
    bool isfull() const;
    void print() const;
    void push(int el);
    int search(int el);
    void pop();
    int gettop();
private:
    Bus stack[garageSize];
    int top;
 
};

#endif