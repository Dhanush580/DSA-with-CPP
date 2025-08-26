#include<iostream>
#include<map>
using namespace std;
//maps store the values in key value pairs, in sorted order of keys

int main(){
    map<int/*key datatype*/ , string/* value datatype*/> mp;
    mp={{1,"dhanush"},{2,"ramesh"},{0,"girish"}};
    mp[3]="prasad";
    mp.insert({4,"tricky"});
    cout<<mp[3]<<endl;
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    auto iter=mp.find(1);
    auto iter2=mp.find(4);
    mp.erase(iter, iter2);
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}