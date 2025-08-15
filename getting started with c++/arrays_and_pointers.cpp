#include<iostream>
using namespace std;
#include<string>

int main(){
    //arrays are variables that are used to store multiple values in a single variable
    //creating arrays in cpp
    int nums[]={1,2,3,4,5}; // way - 1

    int nums2[5];
    nums2[0]=1;
    nums2[1]=2;
    nums2[2]=3;
    nums2[3]=4;   
    nums2[4]=5;  //way - 2

    //accesing array elements - elements in the array can be accessed using index numbers, index numbers starts from 0, end with length of array -1 

    cout<<nums[0]<<endl;
    cout<<nums[1]<<endl;
    cout<<nums[2]<<endl;
    cout<<nums[3]<<endl;
    cout<<nums[4]<<endl; //way - 1

    //through loops

    //for loop

    cout<<"Array elements printed through loops: \n";
    for (int i=0;i<=4;i++){
        cout<<nums2[i]<<endl;
    }
    //while loop

    int i=0;
    while(i<=4){
        cout<<nums[i]<<endl;
        i++;
    }
     
    //we can also modify the arrray value by using its array index 

    int myarr[]={1,2,3,4,5};
    myarr[4]=6; //modifying 5 to 6
    cout<<myarr[4];


    //pointers in arrays
    //we can also use pointers with arrays, but we should not use "&" operator for address, we can simply use array name
    int arr[5]={1,2,3,4,5};
    int* p=arr; //it stores the address of first block of array
    cout<<"The address of arr[0] : "<<p<<endl;
    cout<<"the address of arr[1] : "<<p+1<<endl;
    cout<<"the address of arr[2] : "<<p+2<<endl;
    cout<<"the value of arr[0] : "<<*p<<endl; //it stores the value of array at first block
    cout<<"the value of arr[0] : "<<*p+1<<endl;
    cout<<"the value of arr[0] : "<<*p+2<<endl;
 

    //printing through pointers and loops
    string names[]={"dhanush", "ramesh", "paramesh", "nagendra"};
    string* ptr=names;

    for(int i=0;i<=3;i++){
        cout<<"the address of array"<<"["<<i<<"]"<<" is "<<(ptr+i)<<", "<<"The value of array"<<"["<<i<<"]"<<" is "<<*(ptr+i)<<endl;
    }

   return 0;

}