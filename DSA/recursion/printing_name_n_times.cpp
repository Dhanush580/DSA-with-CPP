#include<iostream>
using namespace std;

//printing name n times
void printName(int n, string name="dhanush"){ //default parameter name = dhanush
    int count=n;
    if(count==0) return ;
    cout<<name<<" ";
    count--;
    printName(count,name);
}
int main(){
    printName(5);
    cout<<endl;
    printName(6,"siva"); //with name parameter
    return 0;
}