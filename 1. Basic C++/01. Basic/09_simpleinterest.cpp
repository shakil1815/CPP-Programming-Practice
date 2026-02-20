#include<iostream>
using namespace std;
int main(){
    /*
    P = Principal Amount (the money you lend or borrow)
    R = Rate of Interest (per year)
    T = Time (in years)
    */
  float p=1000;
  float r=32;
  float t=3;
  float si=(p*r*t)/100;
  cout<<"Simple interest: ";
  cout<<si;
}