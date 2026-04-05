#include<iostream>
using namespace std;
class level1{
public:
   int roll;
   int id;
   string name;
};
 class level{
public:
int kocu;
 };
class level2:public level1,level {
public:
    string dept;
};
int main(){
   level1 l1;
   level2 l2;
   l2.id=9;
   cout<<l2.id;
}  