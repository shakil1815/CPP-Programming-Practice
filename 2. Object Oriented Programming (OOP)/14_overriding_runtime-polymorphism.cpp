//overriding is a Run time polymorphism;

// Overriding is a Runtime Polymorphism
#include<iostream>
using namespace std;

// ১. প্যারেন্ট ক্লাস (Base Class)
class Scooty { 
public:
    int topSpeed;
    float mileage;
    
    // Virtual Function: 
    // এটি কম্পাইলারকে নির্দেশ দেয় যে, এই ফাংশনটি রানটাইমে "Dynamic Binding" করবে।
    // অর্থাৎ, পয়েন্টারটি যে অবজেক্টকে ধারণ করে আছে (Bike), তার sound() ফাংশনটি খুঁজবে।
    virtual void sound() {
        cout << "Vroom Vroom (Scooty Sound)" << endl;
    }

private:
    int bootSpace;
};

// ২. চাইল্ড ক্লাস (Derived Class)
class Bike : public Scooty { 
public:
    int gears;
    
    // Function Overriding:
    // প্যারেন্ট ক্লাসের sound() ফাংশনটিকে এখানে নতুন রূপ দেওয়া হয়েছে।
    // এখানে 'virtual' না লিখলেও চলে, কারণ এটি ইনহেরিট্যান্সের মাধ্যমে অটোমেটিক ভার্চুয়াল থাকে।
    void sound() override { 
        cout << "Dhroom Dhroom (Bike Sound)" << endl;
    }
};

int main() {
    // ৩. রানটাইম পলিমরফিজম এর প্রয়োগ:
    // এখানে Scooty টাইপের একটি পয়েন্টার (b) দিয়ে Bike ক্লাসের একটি নতুন অবজেক্ট তৈরি করা হয়েছে।
    // মেমোরিতে b পয়েন্টারটি আসলে একটি Bike অবজেক্টকে নির্দেশ করছে।
    Scooty* b = new Bike(); 

    // ৪. কলিং ফাংশন:
    // যেহেতু sound() ফাংশনটি প্যারেন্ট ক্লাসে 'virtual' করা আছে, 
    // তাই কম্পাইলার পয়েন্টারের টাইপ (Scooty) না দেখে, মেমোরিতে থাকা আসল অবজেক্ট (Bike) দেখবে।
    // আউটপুট আসবে: "Dhroom Dhroom"
    b->sound(); 

    /* নোট: 
    যদি Scooty ক্লাসের sound() এর আগে 'virtual' না থাকতো, 
    তবে b->sound() কল করলে আউটপুট আসতো "Vroom Vroom"। 
    তখন একে বলা হতো Static Binding (কম্পাইল টাইমেই সিদ্ধান্ত হয়ে যেত)।
    */

    // মেমোরি ফ্রি করা (গুড প্র্যাকটিস)
    delete b;

    return 0;
}


//nicher code ta comment chara ek code e

// #include<iostream>
// using namespace std;
// class Scooty{ // parent class
// public:
//     int topSpeed;
//     float mileage;
    
//     virtual void sound(){
//         cout<<"Vroom Vroom"<<endl;
//     }

// private:
//     int bootSpace;
// };

// class Bike : public Scooty{ // child class / derived class
// public:
//     int gears;
    
//     void sound(){
//         cout<<"Dhroom Dhroom"<<endl;
//     }
// };

// int main(){
//     Scooty* b = new Bike(); // Object Pointer
//     // virtual ব্যবহারের কারণে এখানে "Dhoroom Dhoroom" প্রিন্ট হবে
//     b->sound();

//     // Scooty* s = new Scooty(); // Object Pointer
//     // s->sound();
// }
