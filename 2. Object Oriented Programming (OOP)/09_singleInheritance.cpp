#include<iostream>
using namespace std;
class Scooty{ // parent class
public:
    int topSpeed;
    float mileage;
private:
    int bootSpace;
};

class Bike : public Scooty{ // child class / derived class
public:
    int gears;
};

int main(){
    Scooty s;
    s.mileage=14;
    s.topSpeed=44;

    Bike b;
    b.topSpeed = 180;
    b.mileage = 12.5;
    b.gears = 6;
}