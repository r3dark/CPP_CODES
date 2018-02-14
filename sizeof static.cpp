#include<iostream>
using namespace std;
class abc
{
    static int a;
    int b;
public:
    static void func1();
    void func2();
};
int abc::a=5;//any value
int main()
{
    abc obj;
    cout<<sizeof(obj);
}
