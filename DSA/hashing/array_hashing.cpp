#include<iostream>
using namespace std;

int main(){
    //for numbers hashing using arrays
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    int hasharr[13]={0}; //this will create hash array with size 12 with all 0's
    for(int i=0;i<n;i++){
        hasharr[arr[i]]+=1;
    }

    int checkNumbers;
    cout<<"Enter for how many you want to check: ";
    cin>>checkNumbers;
    while(checkNumbers--){
        int numbers;
        cin>>numbers;
        //fetching
        cout<<"number "<<numbers<<" appeared for " << hasharr[numbers]<<" times "<<endl;
    }


    //for strings hashing using arrays
    string str="abcdeenaikhnasdgjaisdg";
    int hasharr[26]={0};
    for(int i=0;i<str.size()-1;i++){
        hasharr[str[i]-'a']+=1;
    }
    char alpha;
    cout<<"Enter the character you want to check count : ";
    cin>> alpha;
    cout<<hasharr[alpha-'a'];



    //the problem with array hashing is , we cant create arrays of size 10^7(when declared globally) and 10^6 when declared locally, so to avoid 
    //unnecessary space wastage, and to reduce fetch time, we use map, unorderered maps in cpp
    return 0;
}