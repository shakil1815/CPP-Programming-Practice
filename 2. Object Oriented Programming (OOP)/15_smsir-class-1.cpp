#include <iostream>
using namespace std;

class Student {
private:
    string dept;
    string name;
    int id;

public:
    void getdata();
    void putdata();
};

void Student::getdata() {
    cout<<"Enter Your Department:";
    cin>>dept;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter ID: ";
    cin >> id;
}

void Student::putdata() {
    cout <<"  Name: " << name <<"Department:"<<dept<< "    ID: " << id << endl;
}

int main() {
    Student st[3];

    for (int i = 0; i < 3; i++) {
        cout<<"enter your details "<<i+1<<endl;
        st[i].getdata();
    }

    cout << "Display Information:" << endl;
    for (int i = 0; i < 3; i++) {
        st[i].putdata();
    }

    return 0;
}