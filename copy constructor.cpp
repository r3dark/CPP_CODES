#include<iostream>
using namespace std;
class abc
{
	int x;
	int y;
	public:
		abc();
		abc(int,int);
		abc(abc&);
		void display()
		{
			cout<<x<<" "<<y<<endl;
		}
		void operator=(abc &obj)
		{
			x=obj.x;
			y=obj.y;
			cout<<"inside default assignment operator"<<endl;
		}
};
abc::abc()
{
	x=0;
	y=0;
}
abc::abc(int a,int b)
{
	x=a;
	y=b;
}
abc::abc(abc &obj)
{
	x=obj.x;
	y=obj.y;
	cout<<"inside copy constructor"<<endl;
}
int main()
{
	abc o1(20,40);
	abc o2=o1;//abc o2=(o1);
	o2=o1;
	o2.display();
	o1.display();
}
