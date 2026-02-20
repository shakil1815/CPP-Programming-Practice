#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll;
    string dept;

    student(string name, int roll, string dept)
    {
        this->name = name;
        this->roll = roll;
        this->dept = dept;
    }
};
int main()
{
    student s1("Virat Kohli", 25000, "cse");
    student *s2 = new student("Rohit Sharma", 18000, "stat");

    cout << s1.name << " " << s1.roll << endl;
    cout << s2->name << " " << s2->roll << endl;

    // int* ptr = new int(5245);
    // cout<<*ptr<<endl;
}