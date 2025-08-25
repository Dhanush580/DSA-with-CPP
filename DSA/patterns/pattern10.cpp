#include<iostream>
using namespace std;
/********************************************************* PATTERN-2 **************************************************************/
/*
                                                           *
                                                           **
                                                           ***
                                                           ****
                                                           *****
                                                           ****
                                                           ***
                                                           **
                                                           *
*/
int main(){
    //static way
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=5-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    //dynamic way
    int n;
    cout<<"Enter no.of rows:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}