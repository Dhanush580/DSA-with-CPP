#include<iostream>
using namespace std;
//recursive function- this will print 1 in output infinitely
void f(){
    cout<<1;
    f();
}
int main(){
    f();
    return 0;
}