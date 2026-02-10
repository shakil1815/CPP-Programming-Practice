#include <iostream>
using namespace std;

int main() {
    cout << "Array size: ";
    int n;
    cin >> n;
    int evensum=0;
    int oddsum=0;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    
    for (int i = 0; i < n; i++) {
        if(i%2==0) evensum +=arr[i];
        else oddsum += arr[i];
    }
    
    cout << endl;
    cout<<"Even indces sum: "<<evensum<<endl;
    cout<<"Even indces sum: "<<oddsum<<endl;
    cout << "Difference between even and odd indces: ";
    cout << evensum-oddsum;
    
    return 0;
}