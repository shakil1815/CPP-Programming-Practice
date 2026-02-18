#include<iostream>
using namespace std;
class Vehicle{ // parent class
public:
    int topSpeed;
    float mileage;
    string fuel;
};

class TwoWheeler : public Vehicle{ // child class / derived class
public:
};

class FourWheeler : public Vehicle{ // child class / derived class
public:
};

class Scooty : public TwoWheeler{ // child class / derived class
public:
};

class Bike : public TwoWheeler{ // child class / derived class
public:
};

class Car : public Vehicle{ // child class / derived class
public:
    bool sunroof;
};

class Truck : public Vehicle{ // child class / derived class
public:
};

int main(){
    Bike b1;
}