//to output anything in cpp, we use "cout" method and "<<"-insertion operator 
#include<iostream>
using namespace std;
int main(){
    string name="dhanush";
    cout << "hello world\t"; //will be shown to user
    cout << "This is second line\n"; //this lines continues after first line with gap because of \t in first line
    //to give gap or to make the text appear in new line, we use "\n"-newline or "\t"-tab symbols
    cout << "this line will come in new line.\n"; //this line will be shown in new line because of "\n" in second line
    cout << "hello" << "world\n"; //this will show "helloworld" because of "<<" operator
    cout << "hello" << " " << name;
    return 0;
}