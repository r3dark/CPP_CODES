#include<iostream>
using namespace std;
class abc
{
	int x;
	int y;
	public:
		virtual void get()=0;
		virtual void show()=0;
};

class xyz:public abc
{
	public:
	void get()
	{
		cout<<"get"<<endl;
	}
	void show()
	{
		cout<<"show"<<endl;
	}
};
int main()
{
	xyz o;
	o.get();
	o.show();
}
