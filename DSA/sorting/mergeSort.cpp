#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int high, int mid){
    vector<int> temparr;
    int leftPointer=low;
    int rightPointer=mid+1;
    while(leftPointer<=mid&&rightPointer<=high){
        if(arr[leftPointer]<arr[rightPointer]){
            temparr.push_back(arr[leftPointer]);
            leftPointer++;
        }
        else{
            temparr.push_back(arr[rightPointer]);
            rightPointer++;
        }
    }
    while(leftPointer<=mid){
        temparr.push_back(arr[leftPointer]);
        leftPointer++;
    }
    while(rightPointer<=high){
        temparr.push_back(arr[rightPointer]);
        rightPointer++;
    }
    for (int i = 0; i < temparr.size(); i++) {
        arr[low+ i] = temparr[i];
    }


}
void mergeSort(int arr[],int low, int high){
    
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, high, mid);
}


int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the orginal array before sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"the orginal after sorting is : ";
    int low=0;
    int high=n-1;
    
    mergeSort(arr, low, high);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}