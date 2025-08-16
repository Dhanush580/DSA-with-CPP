#include<iostream>
using namespace std;
//function overloading is a concept in cpp, which lets users to have same fucntion names with different parameters

int sum(int a,int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
int sum(int a, int b, int c, int d){
    return a+b+c+d;
}
//we can have same function name with different parameters

int main(){
    cout<<"the sum of 1+2 is : "<<sum(1,2)<<endl;   
    cout<<"the sum of 1+2+3 is :"<<sum(1,2,3)<<endl; 
    cout<<"the sum of 1+2+3+4 is :"<<sum(1,2,3,4)<<endl;  
    return 0;
}