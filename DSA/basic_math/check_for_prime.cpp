#include<iostream>
using namespace std;

int main(){

    //way-1

    int count=0;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0) count+=1;
    }
    if(count==2){
        cout<<"Prime number";
    }
    else{
        cout<<"Not a Prime number";
    }

    //T.C=O(N)


    //way-2

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count+=1;
            if((n/i)!=i) count+=1;
        }
    }
    if(count==2){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }

    //T.C = O(SQRT(N))
    return 0;
}