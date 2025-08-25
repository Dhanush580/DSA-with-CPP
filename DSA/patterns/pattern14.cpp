#include<iostream>
using namespace std;
/********************************************************* PATTERN-3 **************************************************************/
/*
                                                           A
                                                           AB
                                                           ABC
                                                           ABCD
                                                           ABCDE
*/
int main(){
    //static way
    int n=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }

    //dynamic way
    int no=5;
    cout<<"Enter no.of rows: ";
    cin>>no;
    for(int i=1;i<=no;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }
    return 0;
}