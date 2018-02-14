#include<iostream>
using namespace std;
class dist
{
	int a;
	int b;
	public:
		dist()
		{
			
		}
		void operator()(int u,int v)
		{
			a=u;
			b=v;
			cout<<"two"<<endl;
		}
		dist(int x,int y)
		{
			a=x;
			b=y;
			cout<<"one"<<endl;
		}
		void display()
		{
			cout<<a<<"	"<<b<<endl;
		}
};

int main()
{
	dist o(10,20);
	o.display();
	dist o1;
	o1(20,30);
	o1.display();
	
}
