#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter the coordinates (x y): ";
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << "The point is at the origin (0, 0)" << endl;
    }
    else if (x == 0) {
        // x যদি ০ হয় এবং y যদি ০ না হয়, তবে এটি y-অক্ষে আছে
        cout << "The point lies on the y-axis" << endl;
    }
    else if (y == 0) {
        // y যদি ০ হয় এবং x যদি ০ না হয়, তবে এটি x-অক্ষে আছে
        cout << "The point lies on the x-axis" << endl;
    }
    else if (x > 0 && y > 0) {
        cout << "The point lies in the 1st Quadrant" << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "The point lies in the 2nd Quadrant" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "The point lies in the 3rd Quadrant" << endl;
    }
    else {
        // বাকি থাকে শুধু x > 0 এবং y < 0
        cout << "The point lies in the 4th Quadrant" << endl;
    }
}