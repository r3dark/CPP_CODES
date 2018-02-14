#include<iostream>
using namespace std;
class abc
{
	int *x;
	int *y;
	public:
		abc()
		{
			x=new int;
			y=new int;
		}
		abc(abc& obj)
		{
			x=new int;
			y=new int;
			*x=*(obj.x);
			*y=*(obj.y);
		}
		void change()
		{
			cin>>*x;
			cin>>*y;
		}
		void display()
		{
			cout<<*x<<" "<<*y<<endl;
		}
};

int main()
{
	abc obj;
	obj.change();
	obj.display();
	abc obj1=obj;
	obj1.change();
	obj.display();
}
