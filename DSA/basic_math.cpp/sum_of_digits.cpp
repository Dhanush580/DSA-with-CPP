#include<iostream>
using namespace std;
//to print sum of digits
int main(){
    int sum=0;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
        int lastDigit=n%10;
        n=n/10;
        sum+=lastDigit;
    }
    cout<<"The sum of digits in number is : "<<sum;
    return 0;
}