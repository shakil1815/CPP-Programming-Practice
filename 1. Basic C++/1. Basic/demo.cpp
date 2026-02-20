#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int id;
    student()
    {
    }
    student(int id, string name, float m)
    {
        this->id = id;
        this->name = name;
        this->cgpa = m;
    }
    float getcgpa()
    {
        return cgpa;
    }
    void setcgpa(float m)
    {
        cgpa = m;
    }

private:
    float cgpa;

protected:
    int gfnm;
};
int main()
{
    student s;
    s.id = 9;
        s.name = "shakil";
        s.setcgpa(3.25);
    cout << s.getcgpa()<<endl;

    cout << s.id << endl;
    cout << s.name << endl;
}
