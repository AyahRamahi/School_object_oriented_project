#include<iostream>
#include "Garage.h"
using namespace std;
 
Garage::Garage()
{
    top=0;
 
}//default constructor
 
bool Garage::isempty() const
{
    return top==0;
 
}//isempty
     
bool Garage::isfull() const
{
    return top==garageSize;
}
     
void Garage::print() const
{
    if(!isempty())
    {
        for(int i=top-1;i>=0;i--)
			cout<<stack[i].busId<<" ";
        cout<<endl;
 
    }
    else
        cout<<"sorry garage is empty"<<endl;
 
 
}//print
 
void Garage::push(int el)
{
    if(!isfull())
        stack[top++]=el;
         
    else
        cout<<"sorry garage is full"<<endl;
 
}//push
 
int Garage::search(int el)
{
    int pos=-1;
 
    if(!isempty())
    {
        for(int i=top-1;i>=0;i--)
			if(stack[i].busId==el)
            {
                pos=i;
                break;
            }//if 
 
 
    }
    else
        cout<<"sorry garage is empty"<<endl;
 
    return pos;
}//search
 
void Garage::pop()
{
    if(!isempty())
    {
		cout<<"delete top bus:"<<stack[top-1].busId<<endl;
        top--;
 
    }
    else
        cout<<"sorry garage is empty"<<endl;
 
}//pop
 
int Garage::gettop()
{
	return stack[top-1].busId;
}//gettop