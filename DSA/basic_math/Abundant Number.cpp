#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    int sumofidivisors=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sumofidivisors+=i;
        }
    }
    if(sumofidivisors>n) cout<<"Abundant number";
    else cout<<"Not an Abundant number";
}
