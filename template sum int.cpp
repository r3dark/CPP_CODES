#include<iostream>
using namespace std;
template <class t>
t sum (t a,t b)
{
	return a+b;
}

template <class t,class t1>
t1 sub (t a,t1 b)
{
	return a-b;
}

int main()
{
	int x=sum(10,20);
	float y=sum(10.2f,20.6f);
	//int z=sum(10.3,20);         //error
	int z=sum<int>(10.3,20);
	float u=sum<float>(10.3f,20);
	float q=sub<float,float>(10.3,6);
	cout<<"x="<<x<<" "<<"y="<<y<<" "<<"z="<<z<<" "<<"u="<<u<<" "<<"q="<<q<<" "<<endl;
}
