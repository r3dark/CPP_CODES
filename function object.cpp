#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	cout<<"enter vector 1"<<endl;
	vector<int>v;
	pair<vector<int>::iterator,vector<int>::iterator>p;
	for(int i=0;i<6;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	/*cout<<"enter vector 2"<<endl;
	vector<int>v1;
	for(int i=0;i<6;i++)
	{
		int x;
		cin>>x;
		v1.push_back(x);
	}*/
	int x=count_if(v.begin(),v.end(),bind1st(less<int>(),3));
	cout<<"less "<<x<<endl;
	int y=count_if(v.begin(),v.end(),bind1st(equal_to<int>(),3));
	cout<<"equal "<<y<<endl;
	for(int i=0;i<6;i++)
		cout<<v[i]<<"	";
	/*int x=count_if(v.begin(),v.end(),bind2nd(less<int>(),3));
	cout<<"less "<<x<<endl;
	int y=count_if(v.begin(),v.end(),bind2nd(equal_to<int>(),3));
	cout<<"equal "<<y<<endl;
	for(int i=0;i<6;i++)
		cout<<v[i]<<"	";*/
	/*p=mismatch(v.begin(),v.end(),v1.begin(),equal_to<int>());
	cout<<endl;
	cout<<*(p.first)<<"	";
	cout<<*(p.second)<<endl;*/
	/*sort(v.begin(),v.end(),greater<int>());
	for(int i=0;i<6;i++)
		cout<<v[i]<<"	";
		sort(v.begin(),v.end(),less<int>());
	for(int i=0;i<6;i++)
		cout<<v[i]<<"	";*/
}
