#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> numbers;
    int n;
    int number;
    cout<<"Enter how many numbers you want to check GCD: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>number;
        numbers.push_back(number);
    }
    int min=numbers[0];
    for(int i=0;i<numbers.size();i++){
        if(numbers[i]<min) min=numbers[i];
    }


    for(auto iter=numbers.begin();iter!=numbers.end(),i++){
        for(int i=*iter; i<=min;i++){
            if(i%iter==0)
        }
    }
    
    return 0;
}