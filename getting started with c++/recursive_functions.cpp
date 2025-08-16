#include<iostream>
using namespace std;
//a recursive fucntion is a function, which can call itself to finish a task

//a simple recursive program to print factorial of a number

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }

}

//a simple recursive function to print fibonacci series upto given number

int fibonacci(int n){
    int a=1, b=1;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

//Print numbers from 1 to N using recursion.
void printUpto(int n) {
    if (n == 0) return;       // base case
    printUpto(n-1);           // recursive call first
    cout << n << " ";         // print after recursion
}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    // cout<<"Factorial of "<<number<<" is : " <<factorial(number)<<endl;
    // cout<<"Fibonacci series term at given position is : "<<fibonacci(number);
    printUpto(number);
    return 0;
}