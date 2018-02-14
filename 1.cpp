#include<iostream>
using namespace std;
class abc
{
	int x;
	int y;
	public:
		void display()
		{
			x++;
			y++;
			cout<<x<<" "<<y<<endl;
		}
};
void f()
{
	static abc obj;
	obj.display();
}
int main()
{
	f();
	f();
	f();
}
