#include<iostream>
using namespace std;
int main(){
    //for loop in cpp
    

    //printing 1 to n numbers using for loop 

    
    int n;
    cout<<"Enter a number upto which you want to print numbers\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
    
     

    //printing even numbers using for loop
    
    int n;
    cout<<"Enter a number:\t";
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    

    //printing numbers in reverse

    
    int n;
    cout<<"Enter a number:\t";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<i<<endl;
    }
    

    //squares and cubes of number upto n

    int n;
    cout<<"Enter a number:\t";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<"Square of "<<i<<" is "<<i*i<<" "<<"cube of "<<i<<" is "<<i*i*i<<endl;
    }
}