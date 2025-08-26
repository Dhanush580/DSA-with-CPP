#include<iostream>
#include<queue> //use this library if you want to include queues in your program

using namespace std;
/*
A queue stores multiple elements in a specific order, called FIFO.

FIFO stands for First in, First Out. To visualize FIFO, think of a queue as people standing in line in a supermarket. The first person to stand in line is also the first who can pay and leave the supermarket. This way of organizing elements is called FIFO in computer science and programming.

Unlike vectors, elements in the queue are not accessed by index numbers. Since queue elements are added at the end and removed from the front, you can only access an element at the front or the back.
*/
int main(){
    
    queue<int> q; //declaring queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6); //pushes elements into queue
    //{1,2,3,4,5,6}
    // |         |
    //front    back

    cout<<q.front()<<endl;//returns front element from the queue(first entered)
    cout<<q.back()<<endl;//returns back element from the queue(lastly entered)
    cout<<q.size()<<endl;//returns the size of queue
    cout<<q.empty()<<endl; //return 1 if stack is empty, 0 if something consists
    
    return 0;
}