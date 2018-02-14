#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class p
{
	public:
		void dis()
		{
			cout<<"p"<<endl;
		}
};
class q:public p
{
	public:
		void dis()
		{
			cout<<"q"<<endl;
		}
};
class r:public q{};
int main()
{
	r R;
	R.dis();
}
