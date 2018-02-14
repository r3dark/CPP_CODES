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
class B:protected A
{
	protected:
		int b;
	public:
		void input()
		{
			//A::input();		//or
			cin>>b;
		}
		void input1()			//or this
		{
			A::input();
		}
		
		int mult()
		{
			cout<<a*b;
		}
};

int main()
{
	B o;
	o.input();
	o.input1();			//comment this for A::input()
	o.mult();
}
