#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    int copy=n;
    int sumofdigits=0;
    if(n==0) return 0;
    while(n>0){
        int lastdigit=n%10;
        sumofdigits+=lastdigit;
        n=n/10;
    }
    
    if(copy%sumofdigits==0) cout <<"Harshad Number";
    else cout <<"Not a Harshad Number";
	
}
