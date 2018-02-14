#include<iostream>
using namespace std;
class sum
{
    static int count;
    int add;
public:
    void sumn(sum)
    {
        add=0;
    }
     void func()
    {
        add++;
        count++;
    }
    void disp()
    {
        cout<<add;
        cout<<count;
    }
};
int sum::count;
int main()
{
    sum o1,o2,o3;
    o1.sum::func();o2.func();o1.func();
    o1.disp();o2.disp();o3.disp();
}
