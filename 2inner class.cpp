#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class a
{
	int x=20;
	public:
		class c
		{
			public:
			int y=30;
		};
			public:
				void func(c& obj)
				{
					cout<<x+obj.y<<endl;
				}
};
int main()
{
	a obj1;
	a::c obj;
	obj1.func(obj);
}
