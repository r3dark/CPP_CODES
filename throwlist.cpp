#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void divide(int a, int b) throw (float)
{
	try
	{
		if(b==0)
		{
			throw 0;
		}
		else
		{
			cout<<a/b<<endl;
		}
	}
	catch (int)
	{
		cout<<"inside function"<<endl;
		throw 6.0f  ;											//throw 6.0;
	}
	cout<<"end of function"<<endl;
}
int main()
{
	int a,b;
	cin>>a>>b;
	try
	{
		divide(a,b);
	}
	catch (...)
	{
		cout<<"inside main"<<endl;
	}
	cout<<"end of main"<<endl;
}
