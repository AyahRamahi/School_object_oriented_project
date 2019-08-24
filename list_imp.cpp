#include<iostream>
#include "List.h"
using namespace std;
  
list::list()
{
    length=0;
  
}//default constructor
  
bool list::isempty() const
{
    return length==0;
  
}//isempty
      
bool list::isfull() const
{
    return length==size;
}
      
void list::print() const
{
    if(!isempty())
    {
        for(int i=0;i<length;i++)
			List[i].printBook();
        cout<<endl;
  
    }
    else
        cout<<"sorry List is empty"<<endl;
  
  
}//print
  
void list::addtolast(Book b)
{
    if(!isfull())
        List[length++]=b;
          
    else
        cout<<"sorry List is full"<<endl;
  
}//addtolast
  
void list::addtofirst(Book b)
{
    if(!isfull())
    {
        for(int i=length;i>0;i--)
            List[i]=List[i-1];
          
        List[0]=b;
        length++;
    }
          
    else
        cout<<"sorry List is full"<<endl;
  
}//addtofirst
  
int list::search(int isno)
{
    int pos=-1;
  
    if(!isempty())
    {
        for(int i=0;i<length;i++)
            if(List[i].getISNO()==isno)
            {
                pos=i;
                break;
            }//if 
  
  
    }
    else
        cout<<"sorry List is empty"<<endl;
  
    return pos;
}//search
  
void list::add_element(Book book,int value)
{
    if(!isfull())
    {
        int pos=search(value);
        if(pos!=-1)
        {
        for(int i=length;i>pos;i--)
            List[i]=List[i-1];
          
        List[pos]=book;
        length++;
        }
        else
            cout<<"sorry value not found"<<endl;
    }
          
    else
        cout<<"sorry List is full"<<endl;
  
  
}//add_element
  
void list::deletelast()
{
    if(!isempty())
    {
        cout<<"delete last element:";
		List[length-1].printBook();
		cout<<endl;
        length--;
  
    }
    else
        cout<<"sorry List is empty"<<endl;
  
}//deletelast
  
void list::deletefirst()
{
    if(!isempty())
    {
        cout<<"delete first element:";
		List[0].printBook();
		cout<<endl;
        for(int i=0;i<length-1;i++)
            List[i]=List[i+1];
                  
        length--;
  
    }
    else
        cout<<"sorry List is empty"<<endl;
  
}//deletefirst
  
void list::delete_element(Book book)
{
    if(!isempty())
    {
		int pos=search(book.getISNO());
  
        if(pos !=-1)
        {
          
        for(int i=pos;i<length-1;i++)
            List[i]=List[i+1];
                  
        length--;
        }
        else
            cout<<"sorry element not found"<<endl;
  
    }
    else
        cout<<"sorry List is empty"<<endl;
      
}//delete_element
  
Book list::getfirst()
{
    return List[0];
}//getfirst
  
Book list::getlast()
{
    return List[length-1];
}//getlast