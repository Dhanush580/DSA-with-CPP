#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // //way-1
    // int a, b;
    // int minnum;
    // int gcd=1;
    // cout<<"Enter a and b: ";
    // cin>>a>>b;
    // if(a>b) minnum=b;
    // else minnum=a;
    
    // //looping upto min of (a, b)
    // for(int i=1;i<=minnum;i++){
    //     if(a%i==0 && b%i==0){
    //         gcd=i;
    //     }
    // }
    // cout<< gcd;

    //way-2
    //looping from backwards
    // int a, b;
    // int minnum;
    // int gcd=1;
    // cout<<"Enter a and b: ";
    // cin>>a>>b;
    // if(a>b) minnum=b;
    // else minnum=a;
    
    // //looping upto min of (a, b)
    // for(int i=minnum;i>=1;i--){
    //     if(a%i==0 && b%i==0){
    //         gcd=i;
    //         break;
    //     }
    // }
    // cout<< gcd;

    //way-3
    //using euclidean algorithm
    int a, b;
    int gcd=1;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    while(a>0&&b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    cout<<"GCD is: ";
    if(a==0) cout<<b;
    else cout<<a;

    return 0;
}