#include<iostream>
#include<set>

//sets store unique values and in sorted order
using namespace std;

int main(){
    set<int> numbers={1,2,3,4,5}; //declaring and initializing set
    //accesing elements from set
    for(int i:numbers){
        cout<<i<<" ";
    }
    cout<<endl;

    //inserting
    numbers.insert(6); //inserts number at end of the set
    numbers.insert(6); //duplicate values are ignored and not printed
    for(int i:numbers){
        cout<<i<<" ";
    }
    cout<<endl;
    //inserting at specific place is useless because set always prints in sorted order(but this will work)
    numbers.insert(numbers.begin(), 10);
     for(int i:numbers){
        cout<<i<<" ";
    }
    cout<<endl;


    //finding element
    auto iter=numbers.find(1);
    auto iter1=numbers.find(12);
    cout<<*iter<<endl;

    //removing elements
    numbers.erase(iter,iter1);
    for(int i:numbers){
        cout<<i<<" ";
    }

    cout<<numbers.empty()<<endl; //check if set is empty



    //MULTI-SET
    multiset<int> ms={1,1,1,1,1}; //multi set can take repeated values, and store them in order
    
    for(int i : ms){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}