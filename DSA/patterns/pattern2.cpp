#include<iostream>
using namespace std;
/********************************************************* PATTERN-2 **************************************************************/
/*
                                                           *
                                                           **
                                                           ***
                                                           ****
                                                           *****
*/
int main(){
    //static pattern
    for (int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //dynamic pattern
    int n; 
    cout<<"Enter no. of rows: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}