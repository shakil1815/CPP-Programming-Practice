#include<iostream>
using namespace std;
class overloading
{
public:
  void sum(int a,int b){
   cout<<a+b<<endl;
  } 
  void sum(int a,int b,int c){
   cout<<a+b+c<<endl;
  } 
   void sum(int a,int b,int c,int d){
   cout<<a+b+c+d<<endl;
  } 
};
int main(){
   overloading o;
   o.sum(58,6);
   o.sum(5,6,7);
   o.sum(4,6,8,7);
}