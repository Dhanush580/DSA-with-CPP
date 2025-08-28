#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"Enter the range upto which you want prime numbers: ";
    cin>>n;
    for(int i=1;i<n;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count+=1;
            }
        }
    if(count==2) cout<<i<<" ";
    }
    return 0;
}