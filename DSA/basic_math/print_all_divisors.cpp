#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
int main(){
    //way-1

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }

    //T.C= O(N)

    //way-2
    //but not comes in order
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1; i*i<=n /*can also write as i<=sqrt(n)*/;i++){
        if(n%i==0) {
            cout<<i<<" ";
            if((n/i)!=i) cout<< n/i<< " "; 
    }
}
    //way-3, way-2 with order
    vector <int> divisors;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1; i*i<=n /*can also write as i<=sqrt(n)*/;i++){
        if(n%i==0) {
            divisors.push_back(i);
            if((n/i)!=i) divisors.push_back(n/i); 
        }
    }
    sort(divisors.begin(),divisors.end());
    for(int iter: divisors){
        cout<<iter<<" ";
    }
    return 0;
}