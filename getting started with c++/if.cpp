#include<iostream>
using namespace std;
int main(){
    int a=30, b=20;
    //if statement is used in cpp to execute a block of statements if the condition is true.
    if (a<b){
        cout<<"a is less than b"<<endl;
        cout<<"if statement executed"<<endl;
    }
    cout<<"if statement execution failed because condition failed"<<endl;

    bool val=true;
    if(val==0){
        cout<<"value of val is true"<<endl;
    }
    cout<<"value of val is false"<<endl;

    int x = 20;
    int y = 18;
    if (x < y) {
    cout << "x is greater than y";
    //nothing will be shown, because condition is false and there are no default statements
   }
}