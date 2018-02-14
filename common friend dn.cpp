#include<iostream>
class abc;
using namespace std;
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
    friend void mult (xyz,abc);
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
    friend void mult (xyz,abc);
};
void mult(xyz obj1,abc obj2)
{
    cout<<obj1.a*obj2.b;
}
int main()
{
    xyz obj1;
    abc obj2;
    obj1.getdata();
    obj2.getdata();
    mult(obj1,obj2);
}
