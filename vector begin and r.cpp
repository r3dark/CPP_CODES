#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>obj;
	for(int i=0;i<6;i++)
	{
		int x;
		cin>>x;
		obj.push_back(x);
	}
	vector<int>::iterator ir;
	for(ir=obj.begin();ir<obj.end();ir++)
	{
		cout<<*ir<<" ";
	}
	cout<<endl;
	vector<int>::reverse_iterator i1;
	for(i1=obj.rbegin();i1<obj.rend();i1++)
	{
		cout<<*i1<<" ";
	}
}

