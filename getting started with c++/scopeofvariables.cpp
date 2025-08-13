#include<iostream>
using namespace std;
//global variables are declared here in this section, we can use them anywhere you want , even inside functions.
int a=10;
int newfunc(){
    int b=100; //this is local variable, it can be accessed only in this function.
    cout<<a /*global variable */<<" "<<b<<endl;
}
int main(){
    int b=20;
    cout<<a<<" "<<b<<endl;
    newfunc();
    return 0;
}