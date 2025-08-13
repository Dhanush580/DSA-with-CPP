#include<iostream>
using namespace std;
int main(){
    int a=10, b=20;
    //arithematic operators
    cout<<"Addition of a and b is "<<a+b<<endl;
    cout<<"subtraction of a and b is "<<a-b<<endl;
    cout<<"multiplication of a and b is "<<a*b<<endl;
    cout<<"division of a and b is "<<a/b<<endl;
    cout<<"Modulus of a and b is "<<a%b<<endl;
    cout<<"increase of value of a by 1 is "<<++a<<endl;
    cout<<"decrease of value of a by 1 is "<<--a<<endl;
    
    //assignment operators
    a=30,  b=40;
    cout<<"value of a is "<<a<<endl;    
    cout<<"value of b is "<<b<<endl;
    a+=10; //increase of value of a by 10, like a=a+10
    cout<<"value of a is "<<a<<endl;
    b-=10; //decrease the value of b by 10, like b=b-10
    cout<<"value of b is "<<b<<endl;



    //comparision operators
    a=10, b=20;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    cout<<"a is greater than b "<<(a>b)<<endl;
    cout<<"a is less than b "<<(a<b)<<endl;
    cout<<"a is equal to b "<<(a==b)<<endl;
    cout<<"a is not equal to b "<<(a!=b)<<endl;
    cout<<"a is greater than or equal to b "<<(a>=b)<<endl;
    cout<<"a is less than or equal to b "<<(a<=b)<<endl;

    //logical operators
    a=10, b=20;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    cout<<"a is greater than b and b is greater than 10 "<<((a>b)&&(b>10));
    cout<<"a is greater than b or b is greater than 10 "<<((a>b)&&(b>10));


    return 0;
    
}