#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;

    return 0;
}


//je number input dibo oi tomo fibonacchi output kore:

// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n){
//      if(n==0 || n==1) return 1;
//      return fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<fib(n)<<endl;
// }
