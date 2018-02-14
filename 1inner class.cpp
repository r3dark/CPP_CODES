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
			int y=30;
			public:
				void func(a& obj)
				{
					cout<<obj.x+y<<endl;
				}
		};
};
int main()
{
	a obj1;
	a::c obj;
	obj.func(obj1);
}
