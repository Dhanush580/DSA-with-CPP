#include<iostream>
using namespace std;

int main(){
    long long n, rev=0;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
        int lastDigit=n%10;
        n=n/10;
        rev=(rev*10)+lastDigit;
    } 
    cout<<rev;
    return 0;
}