#include<iostream>
using namespace std;
/********************************************************* PATTERN-5 **************************************************************/
/*
                                                            *********
                                                             *******
                                                              *****
                                                               ***
                                                                *                                                     
*/
int main(){
    //static pattern
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(10-(2*i+1));j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

    //dynamic way
    int n;
    cout<<"Enter the no.of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}