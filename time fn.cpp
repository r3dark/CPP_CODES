#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
public:
    void gettime();
    friend time sum(time,time);
    void display();
};
void time::gettime()
{
    cout<<"Enter time";
    cin>>hours>>minutes;
}
void time::display()
{
    cout<<hours<<"h "<<minutes<<"min ";
}

time sum(time a1,time a2)
{
    time t;
    int x=a1.hours*60+a1.minutes;
    int y=a2.hours*60+a2.minutes;
    int z=x+y;
    t.minutes=z%60;
    t.hours=z/60;
    /*hours=a1.hours+a2.hours;
    minutes=a1.minutes+a2.minutes;
    if(minutes>60)
    {
        hours++;
        minutes=minutes%60;
    }*/
    return t;
}
int main()
{
    time o1,o2,o3;
    o1.gettime();
    o2.gettime();
    o3=sum(o1,o2);
    o3.display();
}
