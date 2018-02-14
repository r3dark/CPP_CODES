#include<iostream>
using namespace std;
class abc
{
	static int x;
	public:
		abc()
		{
			cout<<"inside constructor "<<++x<<endl;
		}
		~abc()
		{
			cout<<"inside destructor "<<x--<<endl;
		}
};
int abc::x=0;
int main()
{
	abc obj1;
	{
		abc obj2;
		{
			abc obj3;
		}
	}
}
