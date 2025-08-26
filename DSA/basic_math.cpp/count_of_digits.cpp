#include<iostream>
using namespace std;
//counting no.of digits in a given number
int main(){
    long long n, count=0;
    cin>>n;
    while(n>0){
        int lastDigit=n%10;
        count+=1;
        n=n/10;
    }
   cout<<count;
    return 0;
}