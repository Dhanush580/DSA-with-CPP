#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> mp;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]+=1;
    }
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (auto it : mp) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";

    return 0;
}
