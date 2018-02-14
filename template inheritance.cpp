#include<iostream>
using namespace std;
template <class t>
class one		//class one
{
	protected:
		t a;
	public:
		void in();
};

template<class t>
void one<t>::in()		//in() of class one
{
	cin>>a;
}

template <class t>
class two:public one<int>		//class two
{
	protected:
		t b;
	public:
		void in();
		void out();
};

template<class t>		//in() of class two
void two<t>::in()
{
	cin>>b;
}

template<class t>
void two<t>::out()		//out of class two
{
	cout<<a*b<<endl;
}

int main()
{
	two<int>obj;
	obj.one::in();		//object.classname::function()
	obj.two::in();
	obj.out();
}
