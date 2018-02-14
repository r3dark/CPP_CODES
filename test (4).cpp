#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class b
{
	public:
		base()
		{
			print();
		}
		virtual void print()
		{
			cout<<"display"<<endl;
		}
};
class d:public b
{
	public:
		d(){};
		virtual void print()
		{
			cout<<"2nd display"<<endl;
		}
};
int main()
{
	b* pb=new d();
	delete pb;
}
