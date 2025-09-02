#include<bits/stdc++.h>
using namespace std;

int pivotIndex(int arr[], int low, int high){
    int pivotele=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivotele&&i<=high-1){
            i++;
        }
        while(arr[j]>pivotele&&j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void QuickSort(int arr[], int low, int high){
    if(low>=high) return ;
    int pivot=pivotIndex(arr, low, high);
    QuickSort(arr, low, pivot-1);
    QuickSort(arr, pivot+1, high);
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i<<" element: ";
        cin>>arr[i];
    }
    cout<<"Array before sorting is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int low=0;
    int high=n-1;
    QuickSort(arr,low, high);
    cout<<"Array after sorting is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}