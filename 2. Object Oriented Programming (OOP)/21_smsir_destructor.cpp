#include <iostream>
using namespace std;

int count = 0; // Global variable

class item {
public:
    // Constructor
    item() {
        count++;
        cout << "Number of object created: " << count << endl;
    }
    
    // Destructor (নামের আগে টাইল্ড ~ চিহ্ন থাকে)
    ~item() {
        cout << "No of object destroyed: " << count << endl;
        count--;
    }
};

int main() {
    item a1, a2, a3, a4; 
    item ax;
    
    return 0;
}