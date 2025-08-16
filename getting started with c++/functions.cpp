#include<iostream>
using namespace std;

//functions are block of codes, which are executed when they are called, we can reuse them as many times as we want

//one simple function
void greet(){                     //this step is function declaration
    cout<<"Hello User"<<endl;     //this step is function definition
}
//we can do  function declaration and function definition steps in seperate places

int square(int num);    //function declaration

int maxoftwo(int num1, int num2) {//num1, num2 are functional parameters
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
    return 0;
}
int main(){
    greet(); // this step is function calling
    greet();
    greet();  //we can call a function as many times as we want 

    cout<<square(10)<<endl;

    cout<<maxoftwo(78,9)<<endl;  //78,9 are actual parameters
    cout<<maxoftwo(1,89)<<endl;
      
    return 0;
}

int square(int num){   //function definition
    return num*num;
}