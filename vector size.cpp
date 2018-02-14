#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>obj;
	cout<<"obj size "<<obj.size()<<endl;
	cout<<"max size "<<obj.max_size()<<endl;
	cout<<"if empty "<<obj.empty()<<endl;
	cout<<"capacity "<<obj.capacity()<<endl;
	int x;
	cin>>x;
	obj.push_back(x);
	cin>>x;
	obj.push_back(x);
	cin>>x;
	obj.push_back(x);
	cin>>x;
	obj.push_back(x);
	cin>>x;
	obj.push_back(x);
	cout<<"obj size "<<obj.size()<<endl;
	cout<<"max size "<<obj.max_size()<<endl;
	cout<<"if empty "<<obj.empty()<<endl;
	cout<<"capacity "<<obj.capacity()<<endl;
	obj.resize(2);
	cout<<"obj size after resize "<<obj.size()<<endl;
}
