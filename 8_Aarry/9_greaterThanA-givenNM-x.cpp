#include <iostream>
using namespace std;

int main() {
    cout << "Array size: ";
    int n;
    cin >> n;
    
    int x = 4; 
    int count = 0;
    
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Elements greater than " << x << ": ";
    
    for (int i = 0; i < n; i++) {
        // যদি সংখ্যাটি x এর চেয়ে বড় হয়
        if(arr[i] > x) {
            count++;          
            cout << arr[i] << " "; // সংখ্যাটি প্রিন্ট করলাম
        }
    }
    
    cout << endl; 
    cout << "Total Count: " << count;
    
    return 0;
}