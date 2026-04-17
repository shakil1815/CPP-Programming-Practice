#include <iostream>
using namespace std;
int main()
{
    cout << 5 % 7 << endl;
    cout << 5 % 5 << endl;
    cout << 5 % (-7) << endl;
    cout << (-5) % 7 << endl;
}

/*
MODULUS OPERATOR RULES:
1. a % b = a [if a<b]
2. a % a = 0
3. a % (-b) = a % b
4. (-a) % b = -(a % b)
*/