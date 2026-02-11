#include <iostream>
using namespace std;

int main() {
    int cp,sp;
    cout<<"cost price: ";
    cin>>cp;
    cout<<"selling price: ";
    cin>>sp;
    if(sp>cp) cout<<"profit"<< sp-cp; // --> just sign not any syntex
    else if(sp<cp) cout<<"loss"<< cp-sp;
    else cout<<"no profit no loss";
}