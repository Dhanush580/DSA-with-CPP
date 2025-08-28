#include<iostream>
using namespace std;
void printNumbers(int limit,int n){ //with 2 parameters
    if(limit>n) return ;
    cout<<limit<<" ";
    printNumbers(limit+1, n);
}
int count=1;
void printNumbers(int n){ //with 1 parameter
    if(count>n) return;
    cout<<count<<" ";
    count+=1;
    printNumbers(n);
}
int main(){
    printNumbers(1,100);
    cout<<endl;
    printNumbers(5);
    return 0;
}