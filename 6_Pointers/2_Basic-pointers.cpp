#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 3;
    int *ptr; // declar pointer
    ptr = &x; // address the variable x in the pointer ptr
    cout << "x: "<<x << endl;
    cout << "&x: "<<&x << endl;
    cout << "ptr: "<<ptr << endl;
    cout << "*ptr: "<<*ptr << endl;
    cout << "&ptr: "<<&ptr << endl;
    *ptr = 44;
    cout << "update: " << *ptr << endl;
}

/*
        *--> ei operator ke de-reference operator bole eita
             diye pointer access kora hoy
        &--> ei operator ke Address of operator bole eita
             diye pointer ey variable ar address kora hoy

*/