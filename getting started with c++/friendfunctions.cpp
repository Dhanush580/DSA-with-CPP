#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    void setdata(int x, int y){
        a=x;
        b=y;
    }
    void getdata(){
        cout<<"The number is : "<<a<<"+"<<b<<"i"<<endl;
    }
    friend Complex addTwoComplexNumber(Complex o1, Complex o2);
};
//a friend function is a function which can the private things of a class, even if they are not part of the class(declared outside the class or scope is out of class)
Complex addTwoComplexNumber(Complex o1, Complex o2){
    cout<<"The sum is "<<o1.a+o2.a<<"+"<<o1.b+o2.b<<"i";
}
int main(){
    Complex c1,c2, c3;
    c1.setdata(5,4);
    c1.getdata();
    c2.setdata(6,8);
    c2.getdata();

    c3=addTwoComplexNumber(c1,c2);
    return 0;
}