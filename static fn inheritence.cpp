#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class a{
	protected:
		static int d;
	public:
		static void func(){
			cout<<d<<endl;
		}
};
int a::d=10;
class b:public a{
};
int main()
{
	b::func();
}
