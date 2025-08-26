#include<iostream>
#include<stack>//include this library if you want to use stack in your program
using namespace std;
/*
A stack stores multiple elements in a specific order, called LIFO.

LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, where pancakes are both added and removed from the top. So when removing a pancake, it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming.

Unlike vectors, elements in the stack are not accessed by index numbers. Since elements are added and removed from the top, you can only access the element at the top of the stack.
*/
int main(){
    stack<int> st; //syntax to declare stack
    st.push(1); //pushes 1 into stack
    st.pop(); //pops(removes) the top element from stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(100);

    cout<<st.top()<<"\n"; //returns top most element in the stack(basically the last inserted one)
    cout<<st.size()<<"\n"; //return the size of stack
    cout<<st.empty(); //return 1 if stack is empty, 0 if contains anything
    return 0;
}