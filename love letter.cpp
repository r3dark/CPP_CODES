#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	int t,y,c=0;
	cin>>t;
	string s;
	for(int i=0;i<t;i++)
	{
		//getline(cin,s);
		cin>>s;
	}
	int x=s.length();
	for(int i=0;i<(x/2);i++)
	{
		y=(s[i+x-1]-s[i]);
		c=c+y;
		x=x-2;
	}
	cout<<c<<endl;
}
