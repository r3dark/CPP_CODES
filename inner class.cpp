#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class a
{
	int x=20;
	static int y;
	const int z;
	/*class c{
		int n=20;
		public:
			c(){
				cout<<n<<endl;
			}
			func()
			{
				//cout<<"inside inner class"<<endl;
				cout<<n+x<<endl;
			}
	};*/
	public:
		class c{
		int n=20;
		public:
			c(){
				cout<<n<<endl;
			}
			func()
			{
				//cout<<"inside inner class"<<endl;
				//cout<<n+z<<endl;
				cout<<n+x<<endl;
			}
	};
		a():z(20)					//initializer list
		{
			c obj2;
			obj2.func();
		}
		void input()
		{
			x=10;
		}
		void show()
		{
			cout<<x<<y<<z<<endl;
			//obj2.func();
		}
};
int a::y=20;
int main()
{
	a obj1;
	obj1.input();
	obj1.show();
}
