#include<iostream>
using namespace std;

class complex{
    double i;
    double r;
public:
   void getdata(double a,double b){
    r = a;
    i = b;
   }

   complex sum(complex c1,complex c2){
    complex c3;
    c3.r = c1.r + c2.r;
    c3.i = c1.i + c2.i;
    return c3;
   }

   void putdata(){
    cout<<r<<"+"<<i<<"i"<<endl;
   }
};

int main(){
    complex a,b,c;

    a.getdata(2,4);
    b.getdata(3,5);

    c = a.sum(a,b);

    c.putdata();

    return 0;
}