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
	int num;
	cin>>num;
	int primedigitssum=0;
	while(num>0){
	    int lastDigit=num%10;
	    if(isprime(lastDigit)){
	        primedigitssum+=lastDigit;
	    }
	    num=num/10;
	}
	cout<<primedigitssum;
}
