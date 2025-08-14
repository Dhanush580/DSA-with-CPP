#include<iostream>
using namespace std;
int main(){
    int a=34;
    float b=45.78;
    double c=56.89;
    cout<<"a is "<<a<<" "<<sizeof(a)<<endl;
    cout<<"b is  "<<b<<" "<<sizeof(b)<<endl;
    cout<<"c is  "<<c<<" "<<sizeof(c)<<endl;


    //typecasting
    //converting int to double
    cout<<"a is "<<double(a)<<" " <<sizeof(double(a))<<endl;
    //converting float to int
    cout<<"b is "<<int(b)<<" "<<sizeof(int(b))<<endl;
    //in this way we can convert one datatype to another datatype


    //reference variables, keeping multiples names for a single variables, or to store a single value
    float x=45.890;
    float &y=x;
    float &z=x;
    cout<<"the value of x is "<<x<<endl;    
    cout<<"the value of y is "<<y<<endl;    
    cout<<"the value of z is "<<z<<endl;    
    return 0;
}