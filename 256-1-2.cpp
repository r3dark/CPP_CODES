#include<iostream>
using namespace std;

class shape
{
	protected:
		double a;
		double b;
	public:
		void getdata(double x,double y=0)
		{
			a=x;
			b=y;
		}
		virtual void display_area()=0;
};

class rect:public shape
{
	public:
		void display_area()
		{
			cout<<"area of rectangle is "<<a*b<<endl;
		}
};

class tri:public shape
{
	public:
		void display_area()
		{
			cout<<"area of triangle is "<<0.5*a*b<<endl;
		}
};

class cir:public shape
{
	public:
		void display_area()
		{
			cout<<"area of circle is "<<3.14*a*a<<endl;
		}
};

int main()
{
	shape*ptr;
	tri o1;
	ptr=&o1;
	ptr->getdata(10,20);
	ptr->display_area();
	rect o2;
	ptr=&o2;
	ptr->getdata(10,20);
	ptr->display_area();
	cir o3;
	ptr=&o3;
	ptr->getdata(14);
	ptr->display_area();
}
