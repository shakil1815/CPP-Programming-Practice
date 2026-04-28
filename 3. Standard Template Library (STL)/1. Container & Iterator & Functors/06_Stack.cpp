/*
Stack (স্ট্যাক):এটি LIFO (Last In, First Out) নীতি মেনে চলে।
অর্থাৎ, সবার শেষে যে ডেটা রাখা হবে, তাকেই সবার আগে বের করতে হবে। 
(যেমন: টেবিলের ওপর রাখা বইয়ের স্তূপ)।এখানে শুধু একদিক (Top) থেকেই
ডেটা যোগ বা রিমুভ করা যায়। এর কোনো ইনডেক্স অ্যাক্সেস নেই।
*/

#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<int>s;
   s.push(5);
   s.push(9);
   s.push(8);
   cout<<"Top() : "<<s.top()<<endl;

   cout<<"print using loop: ";
   while(!s.empty()){
         cout<<s.top()<<" ";
         s.pop();
   }

   s.push(5);
   s.push(9);
   s.push(8);
   cout<<endl<<"size: "<<s.size()<<endl;

   stack<int>s2;
   s2.swap(s);
   cout<<"before swap s size: "<<s.size()<<endl;
   cout<<"after swap s2 size: "<<s2.size()<<endl;
}