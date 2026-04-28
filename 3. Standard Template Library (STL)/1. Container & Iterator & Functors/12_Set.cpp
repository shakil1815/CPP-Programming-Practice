/*
কোনো ডুপ্লিকেট বা একই জিনিস দুইবার থাকে না..সবসময় sorted থাকে
মান সরাসরি পরিবর্তন করা যায় না
*/
#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    set<int>s; //greater<int> ei funtors use kore reverse ou kora jay
    s.emplace(1);
    s.emplace(1);
    s.emplace(9);
    s.emplace(7);
    s.emplace(4);

    for(auto p: s){
        cout<<p<<" ";
    }
    cout<<endl;
    cout<<"-----------------------------"<<endl;

    /*
    STL-এ lower_bound() হলো খোঁজার (searching) জন্য একটি 
    অত্যন্ত দরকারি ফাংশন  set.lower_bound(x) এমন একটি ইটারেটর
    (iterator) বা পয়েন্টার রিটার্ন করে, যা x এর সমান বা তার চেয়ে
    ঠিক বড় (immediate next greater) প্রথম উপাদানটিকে নির্দেশ করে।
    */
    cout<<"lowerbound 4 :  "<<*(s.lower_bound(4))<<endl;
    cout<<"lowerbound 5 :  "<<*(s.lower_bound(5))<<endl;

    /*
    set.upper_bound(x) এমন একটি ইটারেটর (iterator) রিটার্ন করে,
    যা x এর চেয়ে অবশ্যই বড় (strictly greater) প্রথম উপাদানটিকে 
    নির্দেশ করে
    */
    cout<<"upperbound 8 :  "<<*(s.upper_bound(8))<<endl;

    
    /*
       duplicate hoy same as multimap
    */cout<<"--------Multiset-----------"<<endl;
    multiset<int>s1;
    s1.emplace(1);
    s1.emplace(1);
    s1.emplace(1);
    s1.emplace(7);
    s1.emplace(4);

    for(auto p1: s1){
        cout<<p1<<" ";
    }
    cout<<endl;

     /*
       duplicate hoy na same as unordered set and redomly print hoy 
       sorted na and ei jaygay upper and lower bound use kora hoy
       na bcz egulo sorted na 
    */cout<<"--------unrdered set----------"<<endl;
    unordered_set<int>s2;
    s2.emplace(1);
    s2.emplace(1);
    s2.emplace(1);
    s2.emplace(7);
    s2.emplace(4);

    for(auto p2: s2){
        cout<<p2<<" ";
    }
    cout<<endl<<endl<<endl;
}