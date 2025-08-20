#include<iostream>
using namespace std;
/********************************************************* PATTERN-5 **************************************************************/
/*
                                                           12345
                                                           1234
                                                           123
                                                           12
                                                           1
*/
int main(){
    //static way

    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    //dynamic way
    int n;
    cout<<"Enter no.of rows: ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}