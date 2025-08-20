// Rectangle class
// Write a class Rectangle with attributes length and breadth.
// Provide three constructors:
// Default (0,0)
// One parameter (square)
// Two parameters (length, breadth)
// Add a method area().
// Demonstrate all constructors in main().

#include<iostream>
using namespace std;
class Rectangle{
    float length, breadth;
    public:
    Rectangle(int len=0, int bdt=0){
        length=len;
        breadth=bdt;
    }
    Rectangle(float s){
        length=s;
        breadth=s;
    }
    Rectangle(float a, float b){
        length=a;
        breadth=b;
    }
    void displayLengthBreadth(){
        cout<<"The length of rectangle is :"<<length<<endl;
        cout<<"The breadth of rectangle is :"<<breadth<<endl;
    }
    void calculateArea(){
        cout<<"The Area of rectangle is :"<<length*breadth<<endl;
    }
};



// Circle Class
// Class with attribute radius.
// Three constructors:
// Default (0)
// One parameter (radius)
// Copy constructor (make a new circle from another).
// Method area().
// Demonstrate in main().


class Circle{
    float radius;
    public:
    Circle(int rad=0){
        radius=rad;
    }
    Circle(float rad1); //function declaration

    void displayCircle(){
        cout<<"The radius of circle is :"<<radius<<endl;
    }
};

Circle::Circle(float rad1){//function definition
        radius=rad1;
}
int main(){
    Rectangle r1 /*using default constructor*/ ;
    Rectangle r2(5.89f); //using single parameter constructor
    Rectangle r3(6.78f, 9.78f);
    r1.displayLengthBreadth(); 
    r1. calculateArea();
    
    r2.displayLengthBreadth();
    r2. calculateArea();


    r3.displayLengthBreadth();
    r3. calculateArea();


    Circle c1,c2(8.9f);
    c1.displayCircle();
    c2.displayCircle();
    
    return 0;
}