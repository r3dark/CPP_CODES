#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class a
{
	public:
		a()
		{
			cout<<"a";
		}
};
class b: public a
{
	public:
		b()
		{
			cout<<"b";
		}
};
class c: public a
{
	public:
		c()
		{
			cout<<"c";
		}
};
class d:public b,public c
{
	public:
		d()
		{
			cout<<"d";
		}
};
int main()
{
	d obj;
}

