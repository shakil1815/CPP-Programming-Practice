#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    
    Student(int r, string n, float m){
        rno = r;
        name = n;
        marks = m;
    }

     //getter ar use kore private ke print kora a jay
    float getMarks(){ // getter
        return marks;
    }

    //setter ar use kore private ke assign  kora jay
    void setMarks(float m){ // setter
        marks = m;
    }

private:
    float marks;
};

int main(){
    Student s1(76,"Raghav",92.2);
    cout<<s1.getMarks()<<endl;
    s1.setMarks(98.5);
    cout<<s1.getMarks()<<endl;
}

/*

Encapsulation is wrapping up of data & member functions in a single unit called class.

Access Modifiers:

    private: data & methods accessible inside class

    public: data & methods accessible to everyone

    protected: data & methods accessible inside class
     & to its derived class

*/