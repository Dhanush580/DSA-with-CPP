#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    //precomputing
    map<int /*key type*/, int/*value type*/> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    //iterating through map
    for(auto i: mpp){
        cout<<i.first<<"--->"<<i.second<<endl;
    }

    int check;
    cout<<"Enter for which number you want to check frequency: ";
    cin>>check;
    cout<<mpp[check]<<endl;

//    so by using maps in cpp, we can store only values of array and their frequency instead of upto size of array...
//    we can also use unordered_map for this....


   using unordered_map
   int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    //precomputing
    unordered_map<int /*key type*/, int/*value type*/> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    //iterating through map
    for(auto i: mpp){
        cout<<i.first<<"--->"<<i.second<<endl;
    }

    int check;
    cout<<"Enter for which number you want to check frequency: ";
    cin>>check;
    cout<<mpp[check]<<endl;

    //unordered map stores the values in it in random order unlike map which stores in ascending order of keys....
    //the best case and average case time complexity of precomputing and fetching in unordered maps is O(1)===>CONSTANT TIME!
    //the worst case time complexity for precomputing and fetching in unordered maps is O(N)==> LINEAR TIME!
    //so it is suggested to use unordered_map for hashing until time limit exceeded problem arrives(which is very rare). then use map.



    //string hashing
    unordered_map<char, int> mp1;
    string str="kdfjasdfidfidfasKDFIBDAIFBSADI";
    for(int i=0;i<str.size()-1;i++){
        mp1[str[i]]+=1;
    }

    //iterating through map
    for(auto i: mp1){
        cout<<i.first<<"-->"<<i.second<<endl;
    }
    char alpha;
    cout<<"Enter the character for which you want to know frequency: ";
    cin>>alpha;
    cout<<mp1[alpha];
    return 0;
}