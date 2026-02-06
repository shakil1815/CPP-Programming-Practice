#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0; 
    while (n > 0) {
        int lastDigit = n % 10; // ১. শেষের ডিজিট বের করা
        if (lastDigit % 2 == 0) { // ২. চেক করা ডিজিটটি জোড় কি না
            sum = sum + lastDigit; // ৩. জোড় হলে যোগ করা
        }
        n = n / 10; // ৪. শেষের ডিজিট বাদ দিয়ে সংখ্যা ছোট করা
    }
    cout << "Sum of even digits: " << sum << endl;
    return 0;
}