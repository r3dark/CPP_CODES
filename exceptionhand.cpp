#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int a;
	float b;
	cout<<"enter first number"<<endl;
	cin>>a;
	cout<<"enter second number"<<endl;
	cin>>b;
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout<<a/b<<endl;
		}
	}
	catch (float)
	{
		cout<<"divide by zero not possible"<<endl;
	}
	cout<<"end of main"<<endl;
}
