#include<iostream>
using namespace std;
/********************************************************* PATTERN-5 **************************************************************/
/*
                                                              *
                                                             ***
                                                            *****
                                                           *******
                                                          *********
                                                          *********
                                                           *******
                                                            *****
                                                             ***
                                                              * 
*/
int main(){
    //static way
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++){
            cout<<"*";
        }
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }
    cout<<endl;
    }
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


    //dynamix way
    int n ;
    cout<<"Enter no.of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
    cout<<endl;
    }
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