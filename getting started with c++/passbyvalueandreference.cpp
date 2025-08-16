#include<iostream>
using namespace std;
void swap(int* a, int* b){  //call by value
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swapusingreference(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10, y=20;
    // swap(&x,&y); //call by value
    swap(x,y); //call by reference
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl;
    return 0;
}