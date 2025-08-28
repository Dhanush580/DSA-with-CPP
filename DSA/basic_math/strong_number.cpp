#include<iostream>
using namespace std;
//strong number is a number which is equal to sum of factorial of its digits

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int factsum=0;
    int copy=n;
    while(n>0){
        int lastDigit=n%10;
        n=n/10;
        int loopsum=1;
        for(int i=1;i<=lastDigit;i++){  
            loopsum=loopsum*i;
        }
        factsum=factsum+loopsum;
    }
    if(factsum==copy) cout<<"Strong Number";
    else cout<<"Not a Strong number";
    return 0;
}