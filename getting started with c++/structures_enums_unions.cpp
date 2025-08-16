#include<iostream>
using namespace std;
//structures in cpp are user defined datatypes, that can store data of different datatypes unlike arrays which can store only single and same datatype
    
//we can create structures in cpp using "struct" keyword

//Note: we should always declare struct outside the main method only


//1 way to create structer, student is the structure name, and we can use it as datatype to create variables
struct student{
    string name; 
    int age; 
    char grade;
    float marks;
};

struct {
    string name;
    int age;
    char grade;
} girish, prakash; //girish and prakash are variables

//unions in cpp

//unions are created using union keyword, they are almost same like structures but, they have good memory control, we can use only one member of union at a time in program

//unions are also declared outside the main function.

union currency{
    int ruppee;
    float paisa;
    double annas;
};

int main(){

    student dhanush;
    dhanush.name="Dhanush";
    dhanush.age=21;
    dhanush.grade='A';
    dhanush.marks=99.69;
    cout<<dhanush.name<<endl;
    cout<<dhanush.age<<endl;
    cout<<dhanush.grade<<endl;
    cout<<dhanush.marks<<endl;

    prakash.name="prakash";
    prakash.age=34;
    prakash.grade='C';
    girish.name="girish";
    girish.age=21;
    girish.grade='B';

    cout<< prakash.name<<endl;
    cout<< prakash.age<<endl;
    cout<< prakash.grade<<endl;
    cout<< girish.name<<endl;
    cout<< girish.age<<endl;
    cout<< girish.grade<<endl;

    cout<<sizeof(student)<<endl;//structure takes size of sum of all items in the struct 

    //using union currency in program
    currency india;
    // india.ruppee=1;  //printing only this value will give correct output , if we print below two lines, we may get undesired output
    // india.paisa=0.100;  //we can only use one member of the union at a time 
    india.annas=0.1000;
    cout<<india.annas<<endl;

    cout<<sizeof(currency)<<endl; //union takes the size of the member which has the highest size, in our case, its double(8 bytes) , so it took 8 bytes


    //enums are special datetype which is used to store group of values and to number those values
    //to create enum(enumaration) use "enum" keyword, unlike struct and union, it can be created inside main method

    enum meal {breakfast,lunch, dinner};
    meal m0=breakfast;
    meal m1=lunch;
    meal m2=dinner;
    cout<<m0<<endl; //it will print 1
    cout<<m1<<endl;
    cout<<m2<<endl;

    //output- 012, each in a newline
    return 0;
}