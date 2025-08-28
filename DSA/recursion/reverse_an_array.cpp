#include<iostream>
using namespace std;

int main(){
    //using for loop; 
    char arr[]={'h','e','l','l','o'};
    for(int i=(sizeof(arr)/sizeof(arr[0]))-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}