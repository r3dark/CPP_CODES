#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main()
{
	map<int,int>m;
	m[1]=50;
	m[2]=10;
	m[3]=40;
	m[4]=20;
	map<int,int>::iterator itr;
	itr=m.begin();
	//map<int,int>::key_compare comp=m.key_comp();
	do
	{
		cout<<itr->first<<"	"<<itr->second<<endl;
	}while(m.key_comp()(((itr++)->first),(m.rbegin()->first)));			//while(comp(((itr++)->first),(m.rbegin()->first)));
}
