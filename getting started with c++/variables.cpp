#include<iostream>
using namespace std;
int main(){
    cout<<"variables in cpp\n";
    //variables are like containers that are used to store values in c++
    /*structure of variables is 
    datatype variable_name = value
    */
    int a = 10;
    /*
    here int is a datatype, a is the variable name, 10 is the value that is stored in a
    */
    cout<< "the value of a is " << a << endl;
    //variable name is also called identifier of variable
    /*
    varaible names can contain special characters in it like _,$ etc
    variable names can start with _ or any letter, not with number ex: int  1num=10; raises and error
    variable names cannot be keywords like int, string , other predefined words. ex: int int = 10; raises an error
    variable names are case sensitive, NUM1 and num1 are different
    */
    int _num=10;
    int num1=20;
    int NUM1=30;
    cout << _num << "\t" << num1 << "\t" << NUM1;

    //we can also declare constants with const keyword, this values cant be changed later in any part of the program
    const int pie=3.14;
    cout<<pie;
    //if we try to redeclare pie= 5.8; we get error: ssignment of read-only variable 'pie'.
    return 0;

}