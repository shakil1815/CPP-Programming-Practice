#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaring and Initializing a 2D vector
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Traversing using range-based loop with auto
    for (const auto &row : matrix) {
        for (const auto &val : row) {
            cout << val << " ";
        }
        cout<<endl;
    }
    return 0;
}