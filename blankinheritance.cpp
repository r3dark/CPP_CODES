#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class a{
	public:
		func(){
		}
};
class c:a{
};
class b:public c{
	public:
		func2(){
			func();
		}
};
int main()
{
	b obj;
	obj.func2();
}

