#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int id;
    float cgpa;

    student(){ //default constructor
    }

    student(string s, int i, float c)  //perameterised constructor
    {
        name = s;
        id = i;
        cgpa = c;
    }

    student(int r){
        id=r;
    }

    student(string s,float c){
        name = s;
        cgpa = c;
    }
};

void print(student s)
{
    cout << s.name << " " << s.id << " " << s.cgpa << endl;
}

int main()
{
    student s1;
    s1.name = "fahim";
    s1.id = 9;
    s1.cgpa = 3.50;

    student s2("shakil",9,3.25);

    student s3(7);

    student s4("jolly",4.00);

    student s5(s2);
    s5.name="saim";

    // cout<<s1.name<<" "<<s1.id<<" "<<s1.cgpa<<endl;
    print(s1);
    print(s2);
    cout<<s3.id<<endl;
    cout<<s4.name<<" "<<s4.cgpa<<endl;
    print(s5);
}