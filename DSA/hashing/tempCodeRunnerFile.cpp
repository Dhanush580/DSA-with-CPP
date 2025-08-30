int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     } 

//     //precomputing
//     unordered_map<int /*key type*/, int/*value type*/> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]+=1;
//     }
//     //iterating through map
//     for(auto i: mpp){
//         cout<<i.first<<"--->"<<i.second<<endl;
//     }

//     int check;
//     cout<<"Enter for which number you want to check frequency: ";
//     cin>>check;
//     cout<<mpp[check]<<endl;