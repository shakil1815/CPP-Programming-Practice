#include<iostream>
using namespace std;
class Student{ // Student is a new data type
public:
    string name;
    int rno;
    float gpa;

    Student(){ // Default Constructor
    }

    Student(string s, int r){ // Parameterised Constructor
        name = s;
        rno = r;
    }

    Student(string s, int r, float g){ // Parameterised Constructor
        name = s;
        rno = r;
        gpa = g;
    }

    Student(int r, float g, string s){ // Parameterised Constructor
        rno = r;
        gpa = g;
        name = s;
    }

    Student(int r){
        rno = r;
    }

};

int main(){
    Student s1("Raghav Garg",76,8.2);
    // s1.name = "Raghav Garg";
    // s1.rno = 76;
    // s1.gpa = 8.2;

    Student s2;
    s2.name = "Himanshu";
    s2.rno = 88;
    s2.gpa = 6.2;

    Student s3("Gagan",13,9.2);

    Student s5(34,5.3,"Harish");

    Student s4(45);

    Student s6 = s1; // Deep Copy
    s6.name = "Manish";

    Student s7(s1); // Copy Constructor - deep copy
    s7.name = "Vijay";

    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s5.name<<" "<<s5.gpa<<" "<<s5.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;
    cout<<s3.name<<" "<<s3.gpa<<" "<<s3.rno<<endl;
    cout<<s6.name<<" "<<s6.gpa<<" "<<s6.rno<<endl;
    cout<<s7.name<<" "<<s7.gpa<<" "<<s7.rno<<endl;
    cout<<s4.rno;
}