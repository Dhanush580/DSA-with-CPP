// #include <iostream>
// using namespace std;

// class Student {
//     string name;
//     int rollno;
//     int marks[5];

// public:
//     // Input details of a student
//     void inputDetails() {
//         cout << "Enter Student Name: ";
//         cin >> name;
//         cout << "Enter Roll No: ";
//         cin >> rollno;
//         cout << "Enter marks in 5 subjects (Maths, Physics, Chemistry, Zoology, Botany): ";
//         for (int i = 0; i < 5; i++) {
//             cin >> marks[i];
//         }
//     }

//     // Calculate average marks
//     double calculateAverage() {
//         int sum = 0;
//         for (int i = 0; i < 5; i++) {
//             sum += marks[i];
//         }
//         return (double)sum / 5;
//     }

//     // Print student info
//     void printDetails() {
//         cout << "\nStudent Name: " << name << endl;
//         cout << "Roll No: " << rollno << endl;
//         cout << "Marks: ";
//         for (int i = 0; i < 5; i++) {
//             cout << marks[i] << " ";
//         }
//         cout << "\nAverage Marks: " << calculateAverage() << endl;
//     }
// };

// int main() {
//     Student students[3]; // array of 3 students

//     // Input details
//     for (int i = 0; i < 3; i++) {
//         cout << "\n Enter details for Student " << i + 1 << " \n";
//         students[i].inputDetails();
//     }

//     // Display details
//     for (int i = 0; i < 3; i++) {
//         cout << "\n Student " << i + 1 << " Details \n";
//         students[i].printDetails();
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Book{
//     public:
//     string title;
//     string author;
//     int price;
//     void display(){
//             if(price<500){
//                 cout<<title<<" "<<author<<" "<<price;
//             }

//     }
// };

// int main(){
//     Book books[2];
//     for(int i=0;i<2;i++){
//         cout<<"Enter book"<<i<<"Title, Author, price in order:"<<endl;
//         cin>>books[i].title>>books[i].author>>books[i].price;
//     }
//     for(int i=0;i<2;i++){
//     books[i].display();
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
class Adder{
    int km;
    float m;
    public:
    void setter(int a, float b){
        km=a;
        m=b;
    }
    void objsetter(Adder o1){
        int dis=o1.km;
        int met=o1.m;
        cout<<"the new distance is :"<<dis+met;
    }
};
int main(){
    Adder add,newadd;
    add.setter(6,3.89);
    newadd.objsetter(add);
    return 0;
}