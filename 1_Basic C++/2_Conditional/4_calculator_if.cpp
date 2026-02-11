#include <iostream>
using namespace std;

int main() {
   int a,b;
   char op; 
   cout<<"Enter number a:";
   cin>>a;
   cout<<"Enter operator: ";
   cin>>op;
   cout<<"Enter number b:";
   cin>>b;
   if(op=='+') cout<<a+b;
   if(op=='-') cout<<a-b;
   if(op=='*') cout<<a*b;
   if(op=='/') cout<<a/b;

}