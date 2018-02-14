#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
int main()
{
	multiset<int> s;
	multiset<int>::iterator itr;
	s.insert(50);
	s.insert(10);
	s.insert(80);
	s.insert(40);
	s.insert(90);
	s.insert(10);
	itr=s.begin();
	s.insert(itr,100);
	//set<int>::value_compare comp=s.value_comp();
	cout<<(*(s.rbegin()))<<endl;
	do
	{
		cout<<*itr<<"	";
	}while(s.value_comp()(*(itr++),*(s.rbegin())));		//while(comp(*(itr++),*(s.rbegin())));
	/*for(itr=s.begin();itr!=s.end();itr++)
	{
		cout<<*itr<<"	";
	}*/
	cout<<s.size()<<endl;
}
