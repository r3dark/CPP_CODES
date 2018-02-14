#include<iostream>
using namespace std;
class mc;
class fi
{
    float f;
    float i;
public:
    void getdata()
    {
        cout<<"enter values in feet and inches";
        cin>>f>>i;
    }
    void display()
    {
        cout<<f<<"ft "<<i<<"in ";
    }
    void convert(mc obj);
};
class mc
{
    float m;
    float cm;
public:
    void getdata()
    {
        cout<<"enter values in meters and cms";
        cin>>m>>cm;
    }
    void display()
    {
        cout<<m<<"m "<<cm<<"cm = ";
    }
    friend void fi::convert(mc);
};
void fi::convert(mc obj)
    {
        float x=obj.m*100+obj.cm;
        x=x/2.54;
        f=x/12;
        i=(int)x%12;
    }
int main()
{
    mc o1;
    fi o2;
    o1.getdata();
    o1.display();
    o2.convert(o1);
    o2.display();
}
