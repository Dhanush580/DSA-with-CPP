#include <iostream>
using namespace std;

class Student {
    string name;
    int rollno;
    int marks[5];

public:
    // Input details of a student
    void inputDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter marks in 5 subjects (Maths, Physics, Chemistry, Zoology, Botany): ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    // Calculate average marks
    double calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return (double)sum / 5;
    }

    // Print student info
    void printDetails() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nAverage Marks: " << calculateAverage() << endl;
    }
};

int main() {
    Student students[3]; // array of 3 students

    // Input details
    for (int i = 0; i < 3; i++) {
        cout << "\n Enter details for Student " << i + 1 << " \n";
        students[i].inputDetails();
    }

    // Display details
    for (int i = 0; i < 3; i++) {
        cout << "\n Student " << i + 1 << " Details \n";
        students[i].printDetails();
    }

    return 0;
}
