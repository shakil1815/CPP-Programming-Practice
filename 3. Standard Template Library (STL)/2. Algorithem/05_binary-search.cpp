#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v = {4,7,3,8};

    sort(v.begin(), v.end()); // আগে sort করতে হবে

    cout << "Binary search 3: " << binary_search(v.begin(), v.end(), 3) << endl;
    cout << "Binary search 1: " << binary_search(v.begin(), v.end(), 1) << endl;
}