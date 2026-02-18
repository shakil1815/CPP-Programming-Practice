#include<iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }

    void add(int ele){
        if(size==capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0;i<size;i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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

    void remove(){
        if(size==0){
            cout<<"Array is Empty"<<endl;
        }
        size--;
    }
};

int main(){
    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl; // 0 1
    v.add(10);
    v.print(); // 10
    cout<<v.size<<" "<<v.capacity<<endl; // 1 1 
    v.add(15);
    v.print(); // 10 15
    cout<<v.size<<" "<<v.capacity<<endl; // 2 2
    v.add(7);
    v.print(); // 10 15 7
    cout<<v.size<<" "<<v.capacity<<endl; // 3 4
    
    v.remove();
    v.print();
    
    // cout<<v.get(10)<<endl;
}