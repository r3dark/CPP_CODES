#include<iostream>
using namespace std;
class abc
{
	int x;
	int y;
	public:
		abc()
		{
			cout<<"inside constructor"<<endl;
		}
		~abc()
		{
			cout<<"inside destructor"<<endl;
		}
};
void f()
{
	static abc obj; //abc 0bj; = cons.,des.,main
}
int main()
{
	f();
	cout<<"inside main"<<endl;
}
