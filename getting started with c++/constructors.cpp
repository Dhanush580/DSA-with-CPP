#include<iostream>
using namespace std;


constructors are fucntions in cpp, which are having same function name as class name

class Book{
    string title;
    int price;
    //constructors are always declared in public
    public:
    Book(void){  //constructor declaration
        title="Unknown"; //constuctor definition
        price=0;
    }
    void printdata(void){
        cout<<"The title of book is: "<<title<< ", Price of Book is: "<<price;
    }
};

class car{
    string brand, model;
    int year;

    public:

    car(){
        cout<<"Enter brand name: "<<endl;
        cin>>brand;
        cout<<"Enter model name: "<<endl;
        cin>>model;
        cout<<"Enter year of manufaccture: "<<endl;
        cin>>year;
    }
    void printcardata(){
        cout<<"The brand name of car is: "<<brand<<", The model name of car is: "<<model<< " year of manufacturing is : "<<year<<endl;
    }
};

class Student{
    static int counter;
    public :
    Student(){
        counter ++;
        cout<<"No.of students created upto now : "<< counter;
    }

};
int Student::counter=0;


/*
4. Default Constructor for Array of Objects

Make an Employee class with name, id, salary.
Create an array of 3 employees.
In the default constructor, set all values to "NA" and 0.
Later, update their details using a function.
*/
class Employee{
    string name;
    int id;
    float salary;
    public:
    Employee(){
        name="NA";
        id=0;
        salary=0;
    }
    void displayDetails(void){
        cout<<name<<" "<<id<<" "<<salary<<endl;
    }
    void setDetails(string empname, int empid, float empsalary){
        name=empname;
        id=empid;
        salary=empsalary;
    }
};

int main(){
    Employee employees[3];
    employees[0].displayDetails();
    employees[1].displayDetails();
    employees[2].displayDetails();
    
    employees[0].setDetails("Dhanush",01, 67000);
    employees[1].setDetails("phanush",02, 69000);
    employees[2].setDetails("hanush",03, 89000);

    employees[0].displayDetails();
    employees[1].displayDetails();
    employees[2].displayDetails();


    Student s1,s2,s3,s4,s5;

    car c1,c2,c3;
    c1.printcardata();
    c2.printcardata();
    c3.printcardata();


    Book b1;
    b1.printdata();


    return 0;
}