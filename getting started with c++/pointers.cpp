#include<iostream>
using namespace std;

int main(){
    //a pointer is a datatype, which holds the address of other varirable
    /*while dealing with pointers, we must be aware of two symbols
    they are & and *
    "&" symbol is address of operator
    "*" symbol is the dereference operator, which is used to find the value at the address

    */
    // int a=10;
    // int* b=&a; //this b holds the address of a

    // cout<<"The address of a is: "<<b<<endl;

    // cout<<"The address of a is: "<<&a<<endl; //it is another way to print address of varaible

    // cout<<"the value at address "<<b<<" is "<<*b<<endl;

    // cout<<"the value at address "<<&a<<" is "<<*&a<<endl; //we can print value at address by this way also
    

    //changing value of variable using pointers
    // int y=20;
    // int* pointer=&y;

    // *pointer=99;
    // cout<<"the value of y is: "<<y;
    

    //swapping values of two intergers using pointers
    // int a=10;
    // int b=20;
    // int* add_a=&a;
    // int* add_b=&b;

    // cout<<"the address of variable a is: "<<add_a<<", The value of a is : "<<*add_a<<endl;
    // cout<<"the address of variable b is: "<<add_b<<", The value of b is : "<<*add_b<<endl;

    // int temp=*add_a;
    // *add_a= *add_b;
    // *add_b= temp;

    // cout<<"After swapping using pointers"<<endl;

    // cout<<"the value of a is: "<<a<<endl;
    // cout<<"the value of b is: "<<b<<endl;

    //pointer to pointer.....that means storing the address of a variable which store the address of some other variable
    int a=10; // a variable which holds some value
    int* b=&a; // a pointer variable which stores the address of variable a 
    int** c=&b; // a pointer varaible which stores the address of pointer variable which stores the address of a

    cout<<"The value of a is : "<<a<<endl;
    cout<<"The address of a is : "<<b<<endl;
    cout<<"the address of b is : "<<c<<endl;
    cout<<"the value at address c is : "<<*c<<endl; //address of a which is stored in b
    cout<<" the value at value of address of c is : "<<**c<<endl;


    return 0;
}