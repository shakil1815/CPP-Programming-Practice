#include <iostream>
using namespace std;

int main() {
 int a,b,c;
 cout<<"Enter 1st side: ";
 cin>>a;
 cout<<"Enter 2nd side: ";
 cin>>b;
 cout<<"Enter 3rd side: ";
 cin>>c;
 if((a+b)>c and (b+c)>a and (c+a)>b){
    cout<<"Valid triangle.";
 }
 else cout<<"Invalid triangle.";
    
}