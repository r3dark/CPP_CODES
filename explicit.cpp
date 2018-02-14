#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class complex
{
	double r;
	double i;
	public:
		complex(int re=0.0, int im=0.0):r(re),i(im)
		{
		}
bool operator == (complex rhs)
{
	return(r==rhs.r && i==rhs.i)? true:false;
}
};
int main()
{
	complex obj(3.0,0.0);
	if(obj==3.0)
	cout<<"same"<<endl;
	else
	cout<<"diff"<<endl;
}
