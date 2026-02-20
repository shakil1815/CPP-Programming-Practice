//function overloading is a compile time polymorphism;
#include<iostream>
using namespace std;
class Loading{
public:
    void sum(string a, string b){
        cout<<a+b<<endl;
    }

    void sum(int a, int b){
        cout<<a+b<<endl;
    }

    void sum(int a, int b, int c){
        cout<<a+b+c<<endl;
    }
};

int main(){
    Loading a;
    a.sum(5,8);
    a.sum(4,9,2);
    a.sum("Raghav","Garg");
}

/*
    overloading mane same name same function bar bar
    use kora mane sudu data type ba parameter change kore
    use kora ba order alada kora ke bujhay
*/

/*
    polymorphism mane ek nam but alada lada kaj     
*/