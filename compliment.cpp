#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int a,s=0,z;
	cin>>a;
	int x=a;
	while(x>0)
	{
		s++;
		x=x>>1;
	}
	for(int i=0;i<s;i++)
	{
		z=z*2;
	}
	a=a^(z-1);
	cout<<a;
}
