#include<iostream>
using namespace std;

int main(){
    int n;
    int fact=1;
    cout<<"Enter the number for which you want factorial: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial is : "<<fact;
    return 0;
}