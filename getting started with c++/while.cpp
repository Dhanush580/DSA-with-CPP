#include<iostream>
using namespace std;
int main(){

    //printing n natural numbers
  
    int i=1,num;
    cout<<"enter a number"<<endl;
    cin >> num;
    while (i<=num){
        cout<<i<<endl;
        i+=1;
    }
    return 0;
  

    //printing sum of n natural numbers

    
    int n, i=0, sum=0;
    cout<<"enter a number upto which you want sum:\n";
    cin>>n;

    while (i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum upto given number is: \t"<<sum;
    
    
    // printing multiplication table of number upto 10
    int num, i=1;
    cout<<"Enter a number for which you want multiplication table:\t";
    cin>>num;

    while(i<=10){
        cout<<num <<"*"<<i<<"="<<num*i<<endl;
        i++;
    }
    return 0;
    
}