#include<iostream>
using namespace std;
//check if the number is palindrome or not
//a palindrome number is a number which reverse is equal to its orginal
int main(){
    int n, rev=0;
    cout<<"Enter a number:" ;
    cin>>n;
    int copy=n;    
    while(n!=0){
       int lastDigit=n%10;
        n=n/10;
        rev=(rev*10)+lastDigit;
    }
    if(rev==copy) cout<<"True";
    else cout<<"False";
    
    return 0;
}