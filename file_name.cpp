#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	fstream d;
	string name;
	d.open("names.txt",ios::out|ios::app);
	{
		while(cin>>name)
		{
			d<<name;
			d<<endl;
		}
		d.close();
	}
	d.open("names.txt",ios::in);
	{
		
		while(d>>name)
		{
			cout<<name<<endl;
		}
	}
}
