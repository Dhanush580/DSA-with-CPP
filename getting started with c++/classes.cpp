#include<iostream>
using namespace std;

//classes are created using class keyword followed by class name
//here student is the class name


class student{  
    //there are two access specifiers in cpp, they are public and private

    private:  //private methods and attributes can be accessed only by the members or functions of that class
    string girlfriend_name;

    public:  //public methods and attributes are accessed (can be accessed) from anywhere of the program
    string name;
    int age;
    
    //we are defining two public functions to deal with private attribute
    void setgfname(string gfname){  // this function is used to set the value to private variable 
        girlfriend_name=gfname;
    }
    void getgfname(){               //this function prints that value 
        cout<<girlfriend_name;
    }
        
};


class book{
    public:
    string title;
    string author;
    int year;
};

class BankAccount{
    private:
    float BankBalance=0;
    public:
    void deposit(float amount){
        BankBalance+=amount;
        cout<<"Deposit successful";
    }
    void withdraw(float amount){
        if(BankBalance<amount){
            cout<<"insufficient balance";
        }
        else{
            BankBalance-=amount;
            cout<<"Withdraw successful"<<endl;
            cout<<"remaining balance: "<<BankBalance;
        }
    }
    void getBalance(){
        cout<<BankBalance;
    }
};
int main(){
    student student1;
    cout<<"Enter your name and age: "<<endl;
    cin>>student1.name>>student1.age;
    cout<<student1.name<<" "<<student1.age<<endl;
    student1.setgfname("anushka");
    student1.getgfname();


    book book1, book2;
    book1.title="Matilda";
    book1.author="Roald Dahl";
    book1.year=1988;
    book2.title="The Giving Tree";
    book2.author="Shel Silverstein";
    book2.year=1964;
    cout<<book1.title<<" "<<book1.author<<" "<<book1.year<<endl;
    cout<<book2.title<<" "<<book2.author<<" "<<book2.year<<endl;



    BankAccount person1;
    float amount;
    int choice;
    char ques;
    cout<<"Welcome to Magadha Bank";
    do{
    cout<<"choose what operation you want to do:\n 1)deposit\t 2)withdraw\t 3)check bank balance. choose the number"<<endl;
    cin>>choice;
    if (choice==1){
        cout<<"Enter the amount you want to deposit: ";
        cin>>amount;
        person1.deposit(amount);
    }
    else if (choice==2){
        cout<<"Enter the amount you want to withdraw: " ;
        cin>>amount;
        person1.withdraw(amount);
    }
    else if(choice==3){
        person1.getBalance();
    }
    cout << "\nDo you want to continue? Say 'y' or 'n': " << endl;
    cin>>ques;
}while(ques!='n');

    return 0;
}