#include<iostream>
using namespace std;
template<class t, class t1>
class sum
{
	t a;
	t b;
	public:
		void in(t,t1);
};
template<class t, class t1>
void sum<t,t1>::in(t x,t1 y)
{
	a=x;
	b=y;
}

int main()
{
	sum<int,float>obj;
	obj.in(10,15);		//obj.in<int,int>(10,15);
}
