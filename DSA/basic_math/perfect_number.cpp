#include<iostream>
using namespace std;
//a number is said to be strong if the number is equal to sum of its factors excluding the number itself
int main(){
    int n;
    int sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0) {
            sum+=i;
        }
    }  
    cout<<sum;
    if(sum==n) cout<<"perfect Number";
    else cout<<"Not a perfect number";
    return 0;
}