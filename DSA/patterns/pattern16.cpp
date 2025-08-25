#include<iostream>
using namespace std;
/********************************************************* PATTERN-3 **************************************************************/
/*
                                                           A
                                                           BB
                                                           CCC
                                                           DDDD
                                                           EEEEE
*/
int main(){

    //static way
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(i+64);
        }
        cout<<endl;
    }

    //dynamic way
    int no;
    cout<<"Enter no.of rows: ";
    cin>>no; 
    for(int i=1;i<=no;i++){
        for(int j=1;j<=i;j++){
            cout<<char(i+64);
        }
        cout<<endl;
    }
    return 0;
}