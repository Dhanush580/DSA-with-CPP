#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if(n/i!=i){
                count++;
            }
        }
    }
    if(count==2) return true;
    else return false;
}

int main() {
	//print all prime numbers in the given range
	int range;
	cin>>range;
	for(int i=1;i<=range;i++){
	    if(isprime(i)){
	        cout<<i<<" ";
	    }
	}
}
