#include<iostream>
using namespace std;
class Scooty{ // parent class
public:
    int topSpeed;
    float mileage;
    
    virtual void sound(){
        cout<<"Vroom Vroom"<<endl;
    }

private:
    int bootSpace;
};

class Bike : public Scooty{ // child class / derived class
public:
    int gears;
    
    void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};

int main(){
    Scooty* b = new Bike(); // Object Pointer
    b->sound();

    // Scooty* s = new Scooty(); // Object Pointer
    // s->sound();
}
