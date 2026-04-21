#include<iostream>
using namespace std;
class test1{
    int code;
    static int count;
public:
  void set(){
    code =++ count;
  }
  static void showcount(){
    cout<<"count= "<<count<<endl;
  }
};
int test1::count=0;
int main (){
    test1 t1,t2;
    t1.set();
    t1.showcount();

    t2.set();
    t2.showcount();
}