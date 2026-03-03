#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    int copy=n;
    int evendigits=0;
    int odddigits=0;
    while(n>0){
        int lastdigit=n%10;
        if(lastdigit%2==0){
            evendigits+=1;
        }
        else{
            odddigits+=1;
        }
        n=n/10;
    }
	cout<<evendigits<<endl;
	cout<<odddigits;
}
