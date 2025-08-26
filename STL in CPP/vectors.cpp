#include<iostream>
// #include<bits/stdc++.h> //this includes all libraries in cpp into our program
#include<vector> //include this library if you want to use vectors in our program


using namespace std;

/*
vectors are just like arrays which are used to store elements in it, but unlike arrays, vectors are resizable, 
they can expand in size, shrink in size.
*/

int main(){
    vector<int> numbers; //syntax to declare vector
    numbers={1,2,3,4,5}; //assigning elements to vector named numbers
    cout<<numbers[0]<<endl; //accessing elements in numbers vector using index

    //we can also use vectors of different datatypes
    vector<float> decimals={1.04,6.78,9.09,7,23,5.67};
    //using for loop to print each element of vector

    for(int i=0;i<decimals.size()/*size() is used to return the size of vector*/;i++){
        cout<<decimals[i]<<" "<<endl;
    }


    //asking user to enter the size of vector and taking n elements in to vector

    int size;
    string name;
    vector<string> names;
    cout<<"Enter the size of vector: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter "<<i+1<<" element: ";
        cin>>name;
        names.push_back(name); //push_back function is used to insert an element at the end of vector
    }

    //accessing elements using for loop


    for(int i=0;i<names.size()/*size() is used to return the size of vector*/;i++){
        cout<<names[i]<<" ";
    }

/******************************************************PRACTICE PROGRAMS ON VECTORS***************************************************/

    // 1)Take n integers from the user, store them in a vector, and print them in reverse order.

    int size, number;
    cout<<"Enter the size of vector:" ;
    cin>>size;
    vector<int> integers(size);
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i+1<<" element into vector: ";
        cin>>number;
        integers[i]=number;
    }
    // cout<<"size of integers vector is : "<<integers.size();

    for(int i=integers.size()-1;i>=0;i--){
        cout<<integers.at(i)<<" ";
    }

    //accessing elements in vector using iterator


    vector<int> v={1,2,3,4,5};
    int* add_of_first_element=&v[0];
    cout<<add_of_first_element<<endl;
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;

    //accessing vector elements using for each loop

    for(int i:v){
        cout<<i<<" ";
    }



    //deleting elements in vector


    vector<string> names={"dhanush","ramesh","girish","prasad","tricky"};
    names.erase(names.end()-1); //deletes last element
    for(auto i:names){
        cout<<i<<" ";
    }
    cout<<endl;
    names.erase(names.begin()/*start index*/,names.end()-2/*end index*/);//deletes first two elements
    for(auto i:names){
        cout<<i<<" ";
    }

    vector<int> v1={1,3,5};
    vector <int> v2(v1);
    v2.insert(v2.begin(), 0); //insert element "0" at beginning position 
    for(int i: v2){
        cout<<i<<" ";
    }
    cout<<endl;
    v1.swap(v2);
    cout<<"Elements in v1 are: ";
    for(int j: v1){
        cout<<j;
    }

    cout<<"\nElements in v2 are: ";
    for(int k: v2){
        cout<<k;
    }
    cout<<endl;

    v1.clear();
    cout<<v1.size()<<endl;
    cout<<v1.empty();
    return 0;
}