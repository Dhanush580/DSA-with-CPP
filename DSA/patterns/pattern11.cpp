#include<iostream>
using namespace std;
/********************************************************* PATTERN-3 **************************************************************/
/*
                                                           1
                                                           01
                                                           101
                                                           0101
                                                           10101
*/
int main(){
    //static way

    for(int i=1;i<=5;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
            if(j%2==0) cout<<0;
            else cout<<1;
        }
        cout<<endl;
    }   
    else{
        for(int j=1;j<=i;j++){
            if(j%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }
    }



    //dynamic way
    int n;
    cout<<"Enter no.of rows: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            for(int j=1;j<=i;j++){
            if(j%2==0) cout<<1;
            else cout<<0;
        }
        cout<<endl;
    }   
    else{
        for(int j=1;j<=i;j++){
            if(j%2==0) cout<<0;
            else cout<<1;
        }
        cout<<endl;
    }
    }
    return 0;
}