#include<iostream>
using namespace std;
//class declaretion:
class car{ //car ia a new data type
public:
    string name;
    int price;
    int seat;
    string type;
};

//Passing Object To The Function And print (best way)
void print(car c){
      cout<<c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.type<<endl;
}

int main(){
    car c1;
    //Class initialization Method-1
    c1.name="Honda City";
    c1.price= 15000000;
    c1.seat=5;
    c1.type ="sedan";

    car c2;
    c2.name="Maruti City";
    c2.price= 700000;
    c2.seat=8;
    c2.type ="suv";

    car c3;
    c3.name="Totoya Furtuner";
    c3.price= 3600000;
    c3.seat=10;
    c3.type ="janu";

    //Print manually:
    // cout<<c1.name<<" "<<c1.price<<" "<<c1.seat<<" "<<c1.type<<endl;
    // cout<<c2.name<<" "<<c2.price<<" "<<c2.seat<<" "<<c2.type<<endl;
    // cout<<c3.name<<" "<<c3.price<<" "<<c3.seat<<" "<<c3.type<<endl;

    //Print using function:
     print(c1);
     print(c2);
     print(c3);
}