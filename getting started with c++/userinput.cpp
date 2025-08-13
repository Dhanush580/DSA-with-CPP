#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"taking input from user in c++\n";
    //we can take input from user in c++ by using "cin" keyword and ">>" extraction operator, cin is part of iostream library
    cout << "Enter your name: ";
    cin>> name; //storing the user entered value in variable "name" which was declared earlier
    cout << "Hello" +name; //printing the user entered name
}