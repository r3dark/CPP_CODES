#include<iostream>
using namespace std;
template <class t>
void func(t a,t b)
{
	cout<<"inside one"<<endl;
}
template<class t1,class t2>
void func(t1 a,t2 b)
{
	cout<<"inside two"<<endl;
}
//template<>			template specialization:- specialised for int type now, hence o/p is "inside three"
void func(int a,int b)
{
	cout<<"inside three"<<endl;
}

int main()
{
	func(10,20);
	func(10.2f,11.3f);
	func(10.2f,11.3);
	func<int>(10,20);
}
