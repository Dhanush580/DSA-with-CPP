#include<iostream>
using namespace std;

int main(){
    //break and continue statements in cpp

    //break statement is used to come out of the loop( or stop execution after that point )
    

    int i=0, n=10;
    while(i<n){
        if(i==8){
            break;
        }
        cout<<i<<endl;
        i+=1;
    }
    
    //continue statement is used to continue the loop, but skip that step

    
    int no=10;
    for(int x=0;x<no;x++){
        if(x==5){
            continue;
        }
        cout<<x<<endl;
    }

//*****************************************************PROBLEMS ********************************************************************/


    // printing numbers from 1 to 50 but skipping all multiples of 3

    int n=50;
    for(int i=1;i<n;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    

    // Stop at Negative
    // Take numbers as input from the user continuously. Stop taking input if the number is negative. Print the sum of all entered numbers (excluding the negative one).

    int sum=0, num;
    cout<<"Enter as many numbers as you want, enter negative number if you want to stop\n";
    while (true){
        cin>>num;
        if(num<0){
            break;
        }
        sum=sum+num;
    }
    cout<<sum<<endl;

    // Password Checker
    // Keep asking the user to enter a password until they get it correct. Stop when they enter the right one.

    int password=12345678, upass, limit=5;
    cout<<"Enter your password\n";
    while(true && limit>=1){
        cin>>upass;
        if(password==upass){
            cout<<"Welcome back boss!";
            break;
        }
        limit-=1;
        cout<<"Wrong password entered, Try again\n"<<"No.of Attempts left: "<<limit<<endl;
    }




    return 0;
}