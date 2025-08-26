#include<iostream>
#include<queue>
using namespace std;

//priority queues are same like queues but stores largest element in it as top(this way is called max heap)
int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(9);
    pq.push(4);
    pq.push(6); //pushes elements into priority queue
    //{9,6,4,2,1} is order of priority queue above

    cout<<pq.top()<<endl;
    pq.pop(); //removes the front element from the queue
    cout<<pq.top()<<endl;
    pq.pop(); //removes the front element from the queue
    cout<<pq.top()<<endl;
    pq.pop(); //removes the front element from the queue
    cout<<pq.top()<<endl;
    


    cout<<pq.size(); //returns the size of priority queue

    
    return 0;
}