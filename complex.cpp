#include<iostream>
using namespace std;
class complex
{
    private:
        int real,imag;
    public:
        int getdata()
        {
            cout<<"Enter real an imag numbers";
            cin>>real>>imag;
        }
        int print()
        {
            cout<<real<<"+i"<<imag;
        }
        complex sum (complex /*&c2*/);
        /*{
            complex t;
            t.real=real+c2.real;
            t.imag=imag+c2.imag;
            return t;
        }*/
        //if want do declare function inside the class
};
complex complex::sum(complex c2)
{
    complex t;
    t.real=real+c2.real;
    t.imag=imag+c2.imag;
    return t;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1.sum(c2);
    c3.print();
}
