#include<iostream>
using namespace std;
int main(){

    //if-esle conditional statements are used to execute either one block based on the condition
    //if given condition is true then print the if block, or else print what is in the else block
    int a=10, b=20;
    if(a<b){
        cout<<"a is less than b"<<endl;
    }
    else{
        cout<<"b is less than a"<<endl;
    }
    //output is "a is less than b"d

    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you're not eligible for voting";
    }
    else{
        cout<<"you're eligible for voting";
    }
    return 0;
}