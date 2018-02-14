#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class excep1
{
	public:
		virtual void what()=0;
};

class bad_Deno:public excep1
{
	public:
		void what()
		{
			cout<<"error: divide by zero"<<endl;
		}
};

double divide(double x,double y)
{
	if(y==0)
	{
		bad_Deno obj;
		throw obj;
	}
	else
		cout<<x/y<<endl;
}

int main()
{
	double x,y;
	cin>>x>>y;
	try
	{
		divide (x,y);
	}
	catch (excep1 & e)
	{
		e.what();
	}
}
