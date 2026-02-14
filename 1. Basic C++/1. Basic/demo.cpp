#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int id;
    float cgpa;

    student(string s, int i, float c)  //perameterised constructor
    {
        name = s;
        id = i;
        cgpa = c;
    }

};

void print(student s)
{
    cout << s.name << " " << s.id << " " << s.cgpa << endl;
}

int main()
{

    student s1("shakil",9,3.25);
     student s2("saim",10,2.25);
    student* p = &s1;
    cout<<p->cgpa<<endl;
    p->cgpa=7.25;
    cout<<p->cgpa<<endl;
    // cout<<s1.name<<" "<<s1.id<<" "<<s1.cgpa<<endl;
}