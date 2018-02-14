#include<iostream>
using namespace std;
//feet inch to cms
class imperial
{
	int feets;
	int inches;
	public:
		imperial(int f,int i):feets(f),inches(i)
		{}
		operator float ()	//casting operator
		{
			float cms=feets*12*2.54+inches*2.54;
			return cms;
		}
};
int main()
{
	imperial obj(1,0);
	float cms=obj;	//call casting operator
	cout<<cms<<"cms"<<endl;
}
