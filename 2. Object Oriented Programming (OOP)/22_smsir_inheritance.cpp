#include<iostream>
using namespace std;
class vehicle{
    string name;
    string model;
 public:
    void input(){
        cin >> name >> model;
    }
    void display(){
        cout << "name: "<< name << endl;
        cout << "model: "<<model << endl;
    }
};
class car : public vehicle{
    double price;
 public:
    void input(){
        vehicle::input();
        cin >> price;
    }
    void display(){
        vehicle::display();
        cout << "price: "<<price << endl;
    }
};
int main(){
    vehicle v;
    cout<<"vehicle information (name & model): ";
    v.input();
    v.display();
    car c;
    cout<<endl;

    cout<<"car information (name, model  & price ): ";
    c.input();
    c.display();
    return 0;
}