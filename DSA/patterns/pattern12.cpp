#include<iostream>
using namespace std;
/********************************************************* PATTERN-3 **************************************************************/
/*
                                                           1        1
                                                           12      21
                                                           123    321
                                                           1234  4321
                                                           1234554321
*/
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=(2*n)-(2*i);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

    //dynamic way

    int no;
    cout<<"Enter no.of rows: ";
    cin>>no;
    for(int i=1;i<=no;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=(2*no)-(2*i);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}