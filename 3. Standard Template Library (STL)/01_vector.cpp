#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declares an empty vector
    vector<int> v;

    // Declares vector with given size
    // and fills it with a value
    cout << "vector 2: ";
    //(size, each element value)
    vector<int> v2(3, 5);
    // Print items of v2
    for (int x : v2)
    {
        cout << x << " ";
    }

    cout << endl;

    // Initializes vector using
    // initializer list.
    cout << "vector 3: ";
    vector<int> v3 = {1, 2, 3, 4};
    for (int it : v3)
    {
        cout << it << " ";
    }

    cout << endl;
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);

    // FOR Each loop :
    cout << "vector : ";
    for (int it : v)
    {
        cout << it << " ";
    }

    cout<<endl;
    //copy vector
    cout<<"copy vector 4: ";
    vector<int>v4(v);
    for(int r : v4){
        cout<<r<<" ";
    }

    cout << endl;
    cout << "pop_back: ";
    v.pop_back();
    for (int it : v)
    {
        cout << it << " ";
    }

    cout << endl;
    cout << "size: " << v.size() << endl;
    ;
    cout << "capacity: " << v.capacity();

    cout << endl;
    cout << "erase: ";
    v.erase(v.begin());
    for (int it : v)
    {
        cout << it << " ";
    }

    cout << endl;
    v.push_back(5);
    v.push_back(9);
    v.emplace_back(8);
    cout << "push_back: ";
    for (int it : v)
    {
        cout << it << " ";
    }

    cout << endl;
    cout<<"access index 2: "<<v[2]<<endl;
    cout<<"access index 2 using v.at():"<<v.at(3);
    cout << endl;

    //v.front(), v.end()
    cout<<"v.front(): "<<v.front()<<endl;
    cout<<"v.back(): "<<v.back()<<endl;
    cout << endl;
}