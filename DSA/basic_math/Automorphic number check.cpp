#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin>>n;
    int square=n*n;
    int lastDigitOfSquare=square%10;
    
    int lastDigitOfN=n%10;
    
    if (lastDigitOfN==lastDigitOfSquare) cout<<"True";
    else cout<<"False";
    
    
}
