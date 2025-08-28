#include<iostream>
using namespace std;
int sum=0;
void sumofnnumbers(int n){ //parameterized way
    if(n==0){ cout<< sum; return ;}
    sum+=n;
    sumofnnumbers(n-1);
}

int anotherfun(int n){
    if(n==0) return 0;
    return n+anotherfun(n-1);
}
int main(){
    sumofnnumbers(100);
    cout<<endl;
    cout<<anotherfun(12);
    return 0;
}