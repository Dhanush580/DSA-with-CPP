#include<iostream>
using namespace std;
/********************************************************* PATTERN-4 **************************************************************/
/*
                                                           E    
                                                           DE
                                                           CDE
                                                           BCDE
                                                           ABCDE
*/
int main(){
    int n=5;
    int alpha;
    cout<< char(alpha);
    cout<<endl;
    cout<<endl;

    for(int i=1;i<=n;i++){
        alpha=n-i+65;
        for(int j=1;j<=i;j++){
            cout<<char(alpha);
            alpha=alpha+1;
        }
        cout<<endl;
    }
    return 0;
}