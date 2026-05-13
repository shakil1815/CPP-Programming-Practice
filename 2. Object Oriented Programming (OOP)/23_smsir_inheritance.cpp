#include<iostream>
using namespace std;
class person{
public:
    string name;
public:
    person(string n){
        name = n;
    }
};
class student : public person{
    int id;
    string department;
public:
    student(string n, int i, string dept) : person(n){
        id = i;
        department = dept;
    }
    void display(){
        cout << "name: " << name << endl;
        cout << "id: " << id << endl;
        cout << "dept: " << department << endl;
    }
};
int main(){
    student s("shakil", 9, "cse");
    s.display();
    return 0;
}

