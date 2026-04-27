//Priority Queue-তে যার প্রায়োরিটি বা মান সবচেয়ে বেশি, সে সবার আগে বের হয়
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(7);
    pq.push(4);
    pq.push(9);
    pq.push(10);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<"\nreverse using functors: ";
    priority_queue<int,vector<int>,greater<int>>pq2; /* vector and 
    greater use kore reverse kora hoiche */
    pq2.push(7);
    pq2.push(4);
    pq2.push(9);
    pq2.push(10);
    
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
}