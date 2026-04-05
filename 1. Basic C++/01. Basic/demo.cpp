#include <iostream>
using namespace std;
class vector
{
public:
    int size;
    int capacity;
    int *arr;
    vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele)
    {
        if (size == capacity)
        {
            capacity = capacity * 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int get(int idx){
        if(size==0){
            cout<<"Array is Empty"<<endl;
            return -1;
        }
        if(idx>=size || idx<0){
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        return arr[idx];
    }

    void remove()
    {
        if (size == 0)
        {
            cout << "Empty Array";
        }
        size--;
    }
};

int main()
{
    vector v;
    cout << v.size << " " << v.capacity << endl;

    v.add(10);
    v.print();
    cout << v.size << " " << v.capacity << endl;

    cout << endl;
    v.add(6);
    v.print();
    cout << v.size << " " << v.capacity << endl;

    cout << endl;
    v.add(9);
    v.print();
    cout << v.size << " " << v.capacity << endl;

    cout << endl;
    v.remove();
    v.print();
    cout << v.size << " " << v.capacity << endl;

    v.get(10);
    cout << endl;
    cout<<v.get(1);
}