#include<iostream>
using namespace std;

void test(){
    static int x = 0;
    x++;
    cout << x << endl;
}

int main(){
    test();
    test();
    test();
}