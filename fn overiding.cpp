#include<iostream>
using namespace std;
class one
{
	public:
		void display()
		{
			cout<<"one";
		}
};
class two:public one
{
	public:
		void display()
		{
			one::display(); //2
			cout<<"two"; //3
		}
};
int main()
{
	two o;
	o.one::display(); //1
	o.display();
}
