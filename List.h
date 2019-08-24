#include"Book.h"
using namespace std;

#ifndef list_h
#define list_h
 
const int size=1000;
class list
{
public:
    list();
    bool isempty() const;
    bool isfull() const;
    void print() const;
    void addtolast(Book b);
    void addtofirst(Book b);
    int search(int isno);
    void add_element(Book book,int value);
    void deletelast();
    void deletefirst();
    void delete_element(Book book);
    Book getfirst();
    Book getlast();
private:
    Book List[size];
    int length;
  
};
#endif