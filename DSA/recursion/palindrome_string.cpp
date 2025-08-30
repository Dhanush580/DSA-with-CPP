#include <bits/stdc++.h>
using namespace std;

int main() {
    //using reverse of a string
    string str = "MADAM";
    string rev;
    for (int i = str.size() - 1; i >= 0; i--) {
        rev += str[i];
    }
    if (str == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;



    //using two pointer approach
    string str1="madam";
    int first=0;
    int last=str1.length()-1;
    while(first<last){
        if(str1[first]!=str1[last]){
            cout<<"Not a palindrome";
            return 0;
        }
        first++;
        last--;
    }
    cout<<"Palindrome";
    return 0;


    //ignoring cases, non alpha numeric character
    string str2="A man, a plan, a canal: Panama";
    string cleaned_string;
    for(int i=0;i<str2.size();i++){
        if(isalnum(str2[i])){
            cleaned_string += (char)tolower(str2[i]);
        }
    }

    cout<<cleaned_string<<endl;
}
