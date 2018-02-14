#include<iostream>
using namespace std;
class one
{
	//protected:
		int a;
		int b;
	public:
		void get()
		{
			cin>>a;
			cin>>b;
		}
		void show()
		{
			cout<<a<<endl;
			cout<<b<<endl;
		}
		int geta()
		{
			return a;
		}
		int getb()
		{
			return b;
		}
};
class two:public one
{
	int c;
	public:
		void input()
		{
			cin>>c;
		}
		void mul()
		{
			cout<<c*geta()*getb(); //cout<<c*a*b;
		}
};
int main()
{
	two obj;
	obj.get();
	obj.show();
	obj.input();
	obj.mul();
}
