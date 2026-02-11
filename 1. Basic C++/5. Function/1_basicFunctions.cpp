#include <bits/stdc++.h>
using namespace std;

// 1. Function Definition
double calculateArea(double length, double width) {
    double area = length * width;
    return area; 
}

int main() {
    // 2. Function Call
    double myArea = calculateArea(5.0, 10.0);
    
    cout<< "The area is: " << myArea <<endl;
}