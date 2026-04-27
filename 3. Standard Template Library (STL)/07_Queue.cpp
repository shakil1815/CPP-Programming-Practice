/*
Queue (কিউ):এটি FIFO (First In, First Out) নীতি মেনে চলে।অর্থাৎ,
যে আগে আসবে সে আগে বের হবে। (যেমন: ট্রেনের টিকিট কাটার লাইন)।
এর একপাশ (End) দিয়ে ডেটা ঢোকে এবং অন্যপাশ (Front) দিয়ে ডেটা 
বের হয়।এটিও ইনডেক্স দিয়ে অ্যাক্সেস করা যায় না।
*/
#include<iostream>
#include<queue>
using namespace std;
int main(){
   queue<int>q;
   q.push(5);
   q.push(4);
   q.push(3);
     
   while(!q.empty()){
     cout<<q.front()<<" ";
     q.pop();

   }
}
