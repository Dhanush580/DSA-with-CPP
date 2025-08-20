#include<iostream>
using namespace std;
#include<math.h>

/*
************************************************Default and Parameterized Constructors**************************************************
Task:
Create a Book class with title, author, and price.
Default constructor should set them to "NA", "NA", and 0.
Parameterized constructor should take values.
Write a function to display book info.
In main(), create books using both constructors.
*/


// class Book{
//     string title,author;
//     int price;
//     public:
//     Book(){
//         title="NA";
//         author="NA";
//         price=0;
//     }
//     Book(string bookauth, string booktitle, int bookprice){
//         title=booktitle;
//         author=bookauth;
//         price=bookprice;
//     }

//     void displayBookDetails(){
//         cout<<"The name of Book is :"<<title<<endl
//         <<"The author of book is :"<<author<<endl
//         <<"The price of book is :"<<price<<endl;
//     }
// };


class Point{
    int x,y;
    public:
    Point(int a, int b){
        x=a;
        y=b;
    }

    void displayPoint(void){
        cout<<"The point is: "<<"("<<x<<","<<y<<")"<<endl;
    }

    void displayDistance(Complex obj1, Complex obj2){
        cout<<"The distance between two points is : "<<sqrt(pow((obj1.x)-(obj2.x),2)+pow((obj1.y)-(obj2.y),2));
    }
};

int main(){
    // Book b1;
    // b1.displayBookDetails();
    // Book b2("A.P.J.Abdul kalam","Wings of Fire",579);
    // b2.displayBookDetails();
    Point c(0,0);
    Point a(3,6);
    Point b(4,5);
    a.displayPoint();
    b.displayPoint();
    c.displayDistance(a,b);



    return 0;
}