#include <iostream>
using namespace std;
class time
{
    int hours;
    int min;

public:
    void getdata(int a, int b)
    {
        hours = a;
        min = b;
    }
    void putdata()
    {
        cout << "Time: " << hours << ":" << min << endl;
    }
    void sum(time t1, time t2)
    {
        min = t1.min + t2.min;
        hours = min / 60;
        min = min % 60;
        hours = hours + t1.hours + t2.hours;
        hours = hours % 24;
    }
};
int main()
{
    time t1, t2, t3;

    t1.getdata(12, 40);
    t2.getdata(10, 40);

    t3.sum(t1, t2);
    t3.putdata();
}