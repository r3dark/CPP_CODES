#include<iostream>
using namespace std;
class one
{
	protected:
		int a;
	public:
		void input()
		{
			cin>>a;
		}
};
class two
{
	protected:
		int b;
	public:
		void input()
		{
			cin>>b;
		}
};

class three:public one,public two
{
	public:
		void mult()
		{
			cout<<a*b;
		}
};

int main()
{
	three o;
	o.one::input();
	o.two::input();
	o.mult();
}
