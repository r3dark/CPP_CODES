#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class base{
	int a[10];
};
class b1:public base{};
class b2:public base{};
class d:public b1,public b2{};
int main()
{
	cout<<sizeof(d)<<endl;
	getchar();
}
