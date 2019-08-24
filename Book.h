#include "Date.h"
#include "Name.h"
using namespace std;
 
#ifndef book_h
#define book_h
 
class Book {
private:
    int ISNO;
    bool borrowed;
    string author;
    Name bookname;
    string subject;
    Date publishedDate;
public:
    bool isavailable(const Book &b)const;
    void setInfo(int isno,bool bor,string auth,string bname,string sub);
    void getInfo(int &isno,bool &bor,string &auth,string &bname,string &sub)const;
    void readBook();
	int getISNO();
    void printBook()const;
    Book(int isno=0,bool bor=false,string auth="",string bname="",string sub="",int d=1 , int m=1 , int y=1990);
 };
 
#endif