#include<iostream>
#include<list> //include this library if you want to use lists in your program
using namespace std;

/*
A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
However, two major differences between lists and vectors are:
You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.
Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.
*/
int main(){
    list<int> ls={1,2,3,4,5};
    cout<<ls.front(); //returns 1st element in the list
    cout<<"\n"<<ls.back(); //return last element from the list

    //cout<<ls[0] - we cant access elements in list using index number

    ls.push_front(0); //inserts element at first position
    ls.push_back(6); //inserts element at last position

    cout<<endl;

    //accessing elements using iterators 
    //instead of writing "list<int>::interator i" , we write "auto" which will be considered as iterator datatype

    for(auto i=ls.begin();i!=ls.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    //accessing elements using for-each loop
    for(int j: ls){
        cout<<j<<" ";
    }
    cout<<endl;

    cout<<ls.size(); //returns size of list

    cout<<endl; 

    //inserting elements in the list
    ls.insert(ls.begin(),100);
     for(int k: ls){
        cout<<k<<" ";
    }

    ls.clear(); //removes all elements from the list
    for(int l: ls){
        cout<<l<<" ";
    }

    //swapping lists
    list<string> names={"dhanush","ramesh","pekala","nagaram"};
    list<string> initials={"r","y","k","o"};
    names.swap(initials);
    for(string n: names){
        cout<<n<<" ";
    }
    cout<<endl;
    for(string m: initials){
        cout<<m<<" ";
    }
    return 0;
}