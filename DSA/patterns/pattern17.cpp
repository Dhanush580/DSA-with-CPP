#include<iostream>
using namespace std;
/********************************************************* PATTERN-5 **************************************************************/
/*
                                                              A
                                                             ABA
                                                            ABCBA
                                                           ABCDCBA
                                                          ABCDEDCBA
*/
int main(){
    int n=5;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<char(j+64);
        }
        for(int j=i-1;j>=1;j--){
            cout<<char(j+64);
        }
        cout<<endl;
    }
    return 0;
}