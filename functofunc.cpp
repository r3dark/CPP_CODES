#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef int(*s)(int,int);
void func1(int x,int y,s ptr)
{
	int z=(*ptr)(x,y);
	cout<<z<<endl;
}
int sum(int x,int y)
{
	return x+y;
}

int main()
{
	//func1(10,20,sum);		
	func1(10,20,*sum);
}

//void *func_ptr(int)=&fun
