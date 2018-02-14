#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void myfunc(int i)
{
	cout<<i<<"	";
}
bool isodd (int i)
{
	if(i%2)
		return 1;
	else
		return 0;
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
	}
	vector<int>v1(4);
	//vector<int>v1;		//for mismatch
	cout<<"enter vector 2"<<endl;
	for(int i=0;i<4;i++)
	{
		int x;
		cin>>x;
		v1.push_back(x);
	}
	vector<int>::iterator itr;
	pair<vector<int>::iterator,vector<int>::iterator>p;
	//for_each(v.begin(),v.end(),myfunc);
	/*itr=find(v.begin(),v.end(),30);
	//cout<<*itr<<endl;
	if(itr==v.end())
	{
		cout<<"element not found"<<endl;
	}
	else
	{
		cout<<"element found"<<endl;
	}*/
	/*itr=find_if(v.begin(),v.end(),isodd);
	cout<<*itr<<endl;*/
	/*itr=find_end(v.begin(),v.end(),v1.begin(),v1.end());
	cout<<*itr<<endl;*/														//????????????????????????????
	/*replace(v.begin(),v.end(),20,90);
	for_each(v.begin(),v.end(),myfunc);*/
	/*remove(v.begin(),v.end(),10);
	for_each(v.begin(),v.end(),myfunc);*/
	/*replace_if(v.begin(),v.end(),isodd,10);
	for_each(v.begin(),v.end(),myfunc);*/
	/*replace_copy(v.begin(),v.end(),v1.begin(),20,99);
	for_each(v1.begin(),v1.end(),myfunc);*/
	/*replace_copy_if(v.begin(),v.end(),v1.begin(),isodd,99);
	for_each(v1.begin(),v1.end(),myfunc);*/
	/*fill(v.begin(),v.begin()+3,5);
	for_each(v.begin(),v.end(),myfunc);*/
	/*fill_n(v.begin(),4,3);
	for_each(v.begin(),v.end(),myfunc);*/
	p=mismatch(v.begin(),v.end(),v1.begin());
	cout<<*(p.first)<<endl;
	cout<<*(p.second)<<endl;
	/*++p.first;						//reduces the range and checks for 2nd mismatch
	++p.second;
	p=mismatch(v.begin(),v.end(),v1.begin());
	cout<<*(p.first)<<endl;
	cout<<*(p.second)<<endl;*/
	
}
