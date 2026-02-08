#include <iostream>
using namespace std;

int main() {
    cout<<"Enter operation: ";
    int n1; // number 1
    cin>>n1;
    char op; // operator
    cin>>op;
    int n2; // number 2
    cin>>n2;
    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-': 
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        default:
            cout<<"Invalid Operator"<<endl;
    }
}