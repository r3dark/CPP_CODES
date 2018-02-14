#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<list>
using namespace std;
int main()
{
	list<int>l1;
	list<int>l2;
	l1.push_front(50);
	cout<<l1.back()<<endl;
}
