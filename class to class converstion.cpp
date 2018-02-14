#include<iostream>
using namespace std;
//cms to feet inches
class imperial
{
	int feet;
	int inches;
	public:
		imperial(int f,int i):feet(f),inches(i)
		{}
		int getmtrs()
		{
			int m=(feet*2.54*12+inches*2.54)/100;
			return m;
		}
};
class standard
{
	int mtrs;
	int cms;
	public:
		standard()
		{}
		standard(imperial obj)
		{
			mtrs=obj.getmtrs();
			cms=obj.getmtrs();
		}
		operator imperial()
		{
			int x=floor((mtrs*100+cms)+2.54);
			int t=x/12;
			int i=x-f*12;
			imperial obj (f,i);
			return obj;
		}
};

int main()
{
	imperial obj1;
	
}
