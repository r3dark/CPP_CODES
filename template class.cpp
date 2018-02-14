#include<iostream>
using namespace std;
template<class t>
class sum
{
	t a;
	t b;
	public:
		void in();
		/*{
			cin>>a;
			cin>>b;	
		}*/
		void out();
		/*{
			cout<<a<<endl;
			cout<<b<<endl;
		}*/
};
template<class t>
void sum<t>::in()
{
	cin>>a;
	cin>>b;
}
template<class t>
void sum<t>::out()
{
	cout<<a<<endl;
	cout<<b<<endl;
}

int main()
{
	sum<int>obj;
	obj.in();
	obj.out();
}
