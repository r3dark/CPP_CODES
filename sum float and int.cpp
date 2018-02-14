#include<iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}

float sum(float a,float b)
{
	return a+b;
}

int main()
{
	int a;
	int b;
	float x;
	float y;
	cout<<"enter int to sum"<<endl;
	cin>>a;
	cin>>b;
	int si=sum(a,b);
	cout<<"sum is "<<si<<endl;
	cout<<"enter float to sum"<<endl;
	cin>>x;
	cin>>y;
	float sf=sum(x,y);
	cout<<"sum is "<<sf<<endl;
	return 0;
}
