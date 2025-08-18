#include<iostream>
using namespace std;

/*
************************************************Default and Parameterized Constructors**************************************************
Task:
Create a Book class with title, author, and price.
Default constructor should set them to "NA", "NA", and 0.
Parameterized constructor should take values.
Write a function to display book info.
In main(), create books using both constructors.
*/


class Book{
    string title,author;
    int price;
    public:
    Book(){
        title="NA";
        author="NA";
        price=0;
    }
    Book(string bookauth, string booktitle, int bookprice){
        title=booktitle;
        author=bookauth;
        price=bookprice;
    }

    void displayBookDetails(){
        cout<<"The name of Book is :"<<title<<endl
        <<"The author of book is :"<<author<<endl
        <<"The price of book is :"<<price<<endl;
    }
};
int main(){
    Book b1;
    b1.displayBookDetails();
    Book b2("A.P.J.Abdul kalam","Wings of Fire",579);
    b2.displayBookDetails();
    return 0;
}