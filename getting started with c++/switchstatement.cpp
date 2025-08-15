#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Tutorial for switch statement"<<endl;
    cout<<"enter any number of the week"<<endl;
    cin>>day;
   
    switch(day){
        case 1:
        cout<<"Sunday";
        break;
        case 2:
        cout<<"Monday";
        break;
        case 3:
        cout<<"tuesday";
        break;
        case 4:
        cout<<"Wednesday";
        break;
        case 5:
        cout<<"Thursday";
        break;
        case 6:
        cout<<"Friday";
        break;
        case 7:
        cout<<"Saturday";
        break;
        default:
        cout<<"choose a proper number"<<endl;

    }

}