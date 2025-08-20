#include<iostream>
using namespace std;
/********************************************************* PATTERN-5 **************************************************************/
/*
                                                           *****
                                                           ****
                                                           ***
                                                           **
                                                           *
*/
int main(){

    // //static pattern
    for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    // //dynamic pattern
    int n;
    cout<<"Enter no.of rows: ";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }


    //another way

    //static pattern 
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    //dynamic pattern
    int n;
    cout<<"Enter no.of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
