#include<iostream>
using namespace std;
class complex
{
	int r;
	int i;
	public:
		complex operator + (complex obj)
		{
			complex t;
			t.r=r+obj.r;
			t.i=i+obj.i;
			return t;
		}
		friend void operator<<(ostream & out, complex c);
		friend void operator>>(istream & in, complex &c);
};
void operator << (ostream & out, complex c)
{
	out<<c.r<<"+i"<<c.i;
}
void operator >> (istream & in, complex &c)
{
	in>>c.r;
	in>>c.i;
}
int main()
{
	complex c1,c2,c3;
	cin>>c1;
	cin>>c2;
	c3=c1+c2;
	cout<<c3;
}
