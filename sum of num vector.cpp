#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>obj;
	int x,i;
	for(i=0;i<6;i++)
	{
		cin>>x;
		obj.push_back(x);
	}
	int sum=0;
	while(!obj.empty())
	{
		sum=sum+obj.back();
		obj.pop_back();		//delete element from the end
	}
	cout<<sum<<endl;
}


