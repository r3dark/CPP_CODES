#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
	public:
		void input()
		{
			cin>>a;
		}
};
class B:public virtual A
{
	protected:
		int b,m1;
	public:
		void input()
		{
			cin>>b;
		}
		int mult()
		{
			m1=a*b;
		}
};

class C:virtual public A
{
	protected:
		int c,m2;
	public:
		void input()
		{
			cin>>c;
		}
		int mult()
		{
			m2=a*c;
		}
};

class D:public B,public C
{
	public:
		void add()
		{
			cout<<m1+m2;
		}
};

int main()
{
	D o;
	o.A::input();
	o.B::input();
	o.B::mult();
	o.C::input();
	o.C::mult();
	o.add();
}
