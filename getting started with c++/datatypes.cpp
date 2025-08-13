#include<iostream>
using namespace std;
int main(){
    //there are different types of datatypes in c++
    /* 
    the datatypes available in cpp are :
    int - to store integer values that doesnt have any floating points ex: 10,20,-10, -20 etc. they may be positive or negative
    float - to store floating point values ex: 10.5, 20.5, -10.5, -20.7299. 
    note:float is used for single precision floating point numbers, shows upto 6-7 decimal digits after decimal point
    double - to store double precision floating point numbers, shows upto 15-16 decimal digits after ex: 10.1234567890123456
    char - to store single character ex: 'a','b','c','d' etc.
    string - used to store group of characters , ex: "hello", "world", "python", etc.
    boolean - to store boolean values ex: true, false
    */
   int a=7;
   int b=-2;
   int c= 3431;
   cout<< a << " " << b << " " << c <<endl;


   float f1= 10.5;
   float f2= -10.5;
   float f3=10.567913100;
   float division=a%b;
   cout<< f1 << " " << f2 << " " << f3 << " " << division <<endl;

   double d1= 10.1234567890123456;
   double d2= -10.1234567890123456;
   cout << d1 << " " << d2 <<endl;
 
   //to store char, we need to use only single quotes, not double quotes
   char alphabet= 'a';
   cout << alphabet<<endl;

   string name="Dhanush";
   cout << name<<endl;

    // bool ans=true;
    // bool ans=false;
    bool ans= 10<5;
    cout<< ans <<endl;


    //there is a special keyword in cpp called "auto" which automatically deduces the data type of a variable at compile time
    auto x = 5; // int
    auto y = 10.5; // double
    auto z = "Hello"; // const char*
    cout << x << " " << y << " " << z << endl;
}