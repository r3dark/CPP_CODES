#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <vector<int> > obj;
	vector<int> v1(2,30);
	vector<int> v2(2,40);
	obj.push_back(v1);
	obj.push_back(v2);
	vector<int>::iterator ir;
	for(int i=0;i<obj.size();i++)
	{
		for(ir=obj[i].begin();ir<obj[i].end();ir++)
		{
			cout<<*ir<<"	";
		}
	}
	/*for(int i=0;i<obj.size();i++)
	{
		for(int j=0;j<obj[i].size();j++)
		{
			cout<<obj[i][j]<<"	";
		}
		cout<<endl;
	}*/
	/*
	vector <vector<int> >::iterator ir;
	vector <int>::iterator ir1;
	for(ir=obj.begin();ir<obj.end();ir++)
	{
		for(ir1=ir->begin();ir1<ir->end();ir1++)
		{
			cout<<*ir1<<"	";
		}
		cout<<endl;
	}*/
}
