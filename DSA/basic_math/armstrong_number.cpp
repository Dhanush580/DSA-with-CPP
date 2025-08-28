#include<iostream>
#include<math.h>
using namespace std;
//armstrong number program

int main(){
    //way-1
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int copy=n;
    int another_copy=copy;
    int count=0;
    int sum=0;
    while(n>0)
    {
        int lastDigit=n%10;
        n=n/10;
        count+=1;
    }
    // cout<<count;
    //after the above loop, we will have count of digits in number;
    while(copy>0){
        int lastDigit=copy%10;
        copy=copy/10;
        sum=sum+ int(round(pow(lastDigit, count)));
    }
    if (sum==another_copy) cout<<"Armstrong Number";
    else cout<<"Not an Armstrong number";




    //way-2
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    string str_copy=to_string(n);
    int lenOfNumber=str_copy.size(); //also can use str_copy.length()
    int copy=n;
    int sum=0;
    while(n>0){
        int lastDigit=n%10;
        n=n/10;
        sum+=int(round(pow(lastDigit, lenOfNumber)));
    }
    if(sum==copy) cout<<"Armstrong Number";
    else cout<<"Not an Armstrong Number";



    return 0;
}