#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;

    int temp = n;  // ১. আসল সংখ্যাটি ব্যাকআপ রাখলাম
    int r = 0;

    while(temp != 0){ // ২. লুপে temp ব্যবহার করলাম, n ঠিক থাকল
       int ld = temp % 10;
       r *= 10;
       r += ld;
       temp = temp / 10;
    }

    // এখন r হলো উল্টো সংখ্যা (Reverse), আর n হলো আসল সংখ্যা (Original)
    cout << "Sum: " << n + r << endl; // ৩. দুটোর যোগফল
}