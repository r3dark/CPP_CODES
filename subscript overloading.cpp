#include<iostream>
using namespace std;
class abc
{
	int x[5];
	public:
		void input()
		{
			for(int i=0;i<5;i++)
			{
				x[i]=i+1;
			}
		}
	int operator [] (int i)			//void operator[] (int i)
	{								//{ cin>>x[i];
		return (x[i]);				//cout<<x[i];}
	}
};
int main()
{
	abc obj;
	obj.input();
	cout<<obj[2];					//obj[2];
}
