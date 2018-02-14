#include<iostream>
using namespace std;
template <class t>
class sum
{
	static int a;
	public:
		void in();
		void out();
};

template<class t>
void sum<t>::in()
{
	a++;
}
template<class t>			//have to tell class that a is a member of generic type class and sum is of generic type
void sum<t>::out()			//declaration of static in global scope
{
	cout<<a<<endl;
}

template<class t>
int sum<t>::a=0;

int main()
{
	sum<int>obj;
	obj.in();
	sum<int>obj1;
	obj1.in();
	sum<float>obj2;
	obj2.in();
	obj.out();
	obj1.out();
	obj2.out();
}

