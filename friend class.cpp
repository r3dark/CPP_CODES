#include<iostream>
using namespace std;
class abc;
class xyz
{
private:
    int a;
public:
    int getdata()
    {
        cout<<"enter number";
        cin>>a;
    }
    friend class abc;
};
class abc
{
private:
    int b;
public:
    int getdata()
    {
        cout<<"enter number";
        cin>>b;
    }
    void mult (xyz);
};
void abc::mult(xyz obj)
{
    cout<<b*obj.a;
}
int main()
{
    xyz obj1;
    abc obj2;
    obj1.getdata();
    obj2.getdata();
    obj2.mult(obj1);
}
