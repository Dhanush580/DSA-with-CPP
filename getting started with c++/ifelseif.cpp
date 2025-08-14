#include<iostream>
using namespace std;
int main(){
    //if - else if blocks are used to check multiple conditions and print one block of statements based on conditions
    /*  QUESTION -1 
     Take a number.
     If positive → print "Positive"
     Else if zero → print "Zero"
     Else → print "Negative"
    */


    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if (number > 0 /*checking for positive*/){
        cout<<"Number is positive"<<endl;
    }
    else if(number==0){
        cout<<"Number is zero"<<endl;
    }
    else{
        cout<<"Number is negative"<<endl;
    }


    
 
   /*   QUESTION - 2
      Take a number.
      If divisible by both 3 and 5 → "FizzBuzz"
      Else if divisible by 3 → "Fizz"
      Else if divisible by 5 → "Buzz"
      Else → "No match"
   */
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"FizzBuzz"<<endl;
    }
    else if(n%3==0){
        cout<<"Fizz"<<endl;
    }
    else if(n%5==0){
        cout<<"Buzz"<<endl;
    }
    else{
        cout<<"No match"<<endl;
    }

    /*what happens here is , first when user enters a numbers, if condition is checked and if it is true , then that block is executed, 
    if it fails, else if condition is checked, if it is true, then else if block is executed..
    if both conditions fail, else block is executed*/
   return 0;
}