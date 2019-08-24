#include<iostream>
#include "Book.h"
using namespace std;
 
bool Book::isavailable(const Book &b)const{
    return ISNO==b.ISNO&&!b.borrowed;
}
 
int Book::getISNO(){
	return ISNO;
}

void Book::setInfo(int isno,bool bor,string auth,string bname,string sub){
    ISNO = isno;
    author = auth;
    bookname.first = bname;
    subject = sub;
    borrowed=bor;
}

void Book::getInfo(int &isno,bool &bor,string &auth,string &bname,string &sub)const{
     isno=ISNO;
     auth=author;
     bname=bookname.first;
     sub=subject;
     bor=borrowed;
}

void Book::readBook(){
	cout<<"the Book published Date:"<<endl;
	publishedDate.read();


    cout<<"please enter the name of Book :"<<endl;
    cin>>bookname.first;
 
    cout<<"please enter the Book ISNO :"<<endl;
    cin>>ISNO;
 
    cout<<"please enter the name of author :"<<endl;
    cin>>author;
 
    cout<<"please enter the Book Subject :"<<endl;
    cin>>subject;
 
    cout<<"please enter if the Book is available : true/false"<<endl;
    cin>>borrowed;
}

void Book::printBook()const{
	cout<<"the Book published Date = ";
	publishedDate.print();
	cout<<"The name of Book = "<<bookname.first<<endl;
	cout<<"The Book ISNO = "<<ISNO<<endl;
	cout<<"The name of author = "<<author<<endl;
	cout<<"The Book subject = "<<subject<<endl;
}

Book::Book(int isno,bool bor,string auth,string bname,string sub,int d, int m, int y):publishedDate(d,m,y){
    setInfo(isno,bor,auth,bname,sub);
}