/* List (লিস্ট): * এটি মূলত একটি ডাবলি লিঙ্কড লিস্ট 
(Doubly Linked List)।এখানে প্রতিটি ডেটা একটার পর 
একটা চেইনের মতো যুক্ত থাকে।এর সামনে এবং পেছনে—উভয়
দিক থেকেই ডেটা যোগ বা ডিলিট করা যায়। তবে ইনডেক্স দিয়ে
সরাসরি মাঝের কোনো ডেটা অ্যাক্সেস করা যায় না।  
size() & capacity(), push_back() & pop_back(), emplace_back(), 
front() & back(),erase(start, end), insert(position,value), 
clear(), empty(), l.begin(), l.end() ->  egulo ar kaj same as vector */

#include<iostream>
#include<list>
#include <algorithm> // find() ব্যবহার করার জন্য এই হেডার ফাইলটি অবশ্যই লাগবে
using namespace std;
int main(){
  list<int>l;
  l.push_back(6);
  l.push_back(7);
  l.push_back(3);
  l.push_front(1);
  for(int val:l){
    cout<<val<<" ";
  }

  cout<<endl;
  l.pop_back();
  for(int val:l){
    cout<<val<<" ";
  }

  cout<<endl;

  list<int> l1 = {1, 3, 4, 2, 5};

    l1.front() = 11;
    auto it = l1.begin();
    advance(it, 2);
    
    *it = 10;

    for (auto i : l1){
        cout << i << " ";
    }

    // Finding 4lk
    cout<<endl;
    auto it1 = find(l1.begin(), l1.end(), 3);
      if (it1 != l1.end()){
           cout <<"element is found: "<< *it1;
      }
      else cout << "Element Not Found!";
}

/*
 advance() ফাংশনটির মূল কাজ হলো ইটারেটরকে (iterator) 
 নির্দিষ্ট কয়েক ঘর সামনে এগিয়ে নিয়ে যাওয়া।
 example: 
 auto it = l.begin();
 advance(it, 2); ->বলার কারণে ইটারেটরটি ২ ঘর সামনে এগিয়ে যাবে।
*/
