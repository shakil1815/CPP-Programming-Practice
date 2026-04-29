/*
Deque (ডিকিউ): * এর পূর্ণরূপ হলো Double-ended queue।
এটি Queue এর মতোই, তবে এর সুবিধা হলো—এর দুই দিক থেকেই
(সামনে এবং পেছনে) ডেটা যোগ বা ডিলিট করা যায়।এটি ইনডেক্স 
দিয়ে অ্যাক্সেস করা সম্ভব।
size() & capacity(), push_back() & pop_back(), emplace_back(), 
at() & [], front() & back(),erase(start, end), insert(position,value), 
clear(), empty(), begin(), end() ->  egulo ar kaj same as vector
*/
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(9);
    d.push_back(6);
    d.push_back(4);
    d.push_back(0);

    for(int val: d ){
        cout<<val<<" ";
    }
    cout<<endl<<d[3];
}