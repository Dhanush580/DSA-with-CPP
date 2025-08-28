#include<iostream>
using namespace std;

void printNumbersInReverse(int n){ 
    if(n==0) return ;
    cout<<n<<" ";
    printNumbersInReverse(n-1);
}

int main(){
    printNumbersInReverse(100);    
    return 0;
}