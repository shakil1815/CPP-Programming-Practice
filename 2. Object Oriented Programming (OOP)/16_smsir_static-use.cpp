#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;

public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount()
    {
        cout << "count= " << count << endl;
    }
};
int item::count= 0;
int main()
{
    item i1, i2, i3, i4;
    
    i1.getdata(5);
    i1.getcount();

    i1.getdata(5);
    i1.getcount();

    i2.getdata(5);
    i2.getcount();

    i3.getdata(5);
    i3.getcount();
}