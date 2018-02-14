#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void myfunc(int i)
{
	cout<<i<<"	";
}
int main()
{
	cout<<"enter vector 1"<<endl;
	vector<int>v;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
		push_heap(v.begin(),v.end());
		for_each(v.begin(),v.end(),myfunc);
	}
	/*v.front();
	pop_heap(v.begin(),v.end());
	v.pop_back();
	cout<<endl;
	for_each(v.begin(),v.end(),myfunc);
	make_heap(v.begin(),v.end());
	cout<<endl;
	for_each(v.begin(),v.end(),myfunc);*/
	/*sort_heap(v.begin(),v.end());
	cout<<endl;
	for_each(v.begin(),v.end(),myfunc);*/
}
