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
        friend complex sum (complex /*c1*/,complex /*c2*/);
        /*{
            complex t;
            t.real=c1.real+c2.real;
            t.imag=c1.imag+c2.imag;
            return t;
        }*/
        //if want do declare function inside the class
};
complex sum(complex c1, complex c2)
{
    complex t;
    t.real=c1.real+c2.real;
    t.imag=c1.imag+c2.imag;
    return t;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=sum(c1,c2);
    c3.print();
}
