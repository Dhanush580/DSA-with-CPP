#include<iostream>
#include<string>
using namespace std;
int main(){
    //strings in cpp are created using string keyword and enclosing them within  " "
    string line="Virat kohli is my favourite cricketer" ;
    cout<<line<<endl;
    //we can access lettters in string using index numbers
    cout<<line[0]<<endl;
    //we can get the length of string using function size() or length(), both are valid
    cout<<line.length()<<endl;
    cout<<line.size()<<endl;
    //we can change the values in string by using index numbers
    line[0]='B';
    cout<<line<<endl;
    //output: Birat kohli is my favourite cricketer
    //we can concat two strings using "+" operator (it can be used for both addition of numbers and concatenation of strings)
    string firstname="Veera Dhanush Kumar";
    string lastname="Pekala";
    cout<<firstname+" "+lastname<<endl;
    //we cant concat numbers and strings
    // int a=10;
    // cout<<firstname+a;  gives error


    //taking string as input from user
    string ip;
    cout<<"enter your full name"<<endl;
    cin>>ip;
    cout<<ip;
    //ip: veera Dhanush Kumar pekala   , op: veera 
    //this happens because white space is considered as terminating character is cin method.

    //we use getline to get full string as input. syntax: getline (cin, variable name)
    string fn;
    cout<<"enter your full name"<<endl;
    getline(cin, fn);
    cout<<fn;
    //this will print full name
} 