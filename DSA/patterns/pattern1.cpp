#include<iostream>
using namespace std;

/****************************************************PATTERN - 1 ***************************************************************/
/*
                                                        ****
                                                        ****
                                                        ****
                                                        ****
*/



int main(){
    //static pattern
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"* ";
        }
        cout<<endl;
    // }


    //dynamic pattern
    int n;
    cout<<"Enter no.of rows: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}