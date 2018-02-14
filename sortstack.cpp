#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s1;
	stack<int>s2;
	int n;
	cout<<"enter number of elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cout<<"enter element"<<endl;
		cin>>x;
		s1.push(x);
	}
	while(!s1.empty())
	{
		int t=s1.top();
		s1.pop();
		if(s2.empty())
			s2.push(t);
		else
		{
			while(t<s2.top())
			{
				int y=s2.top();
				s2.pop();
				s1.push(y);
				if(s2.empty())
					break;
			}
			s2.push(t);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<s2.top()<<"	";
		s2.pop();
	}
}
