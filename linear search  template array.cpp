#include<iostream>
using namespace std;
template <class t, class t1, class t2>		//template <class t>							
int linear(t ar[], t1 n, t2 x)				//int linear(t ar[], t1 n, t2 x)
{
	/*for(i=0;i<n;i++)
	{
		if(x==ar[i])
		{
			cout<<x<<" exists and index of x is "<<i<<endl;
			
		}
		cout<<"doesn't exist"<<endl;
	}*/
	for(int i=0;i<n;i++)
	{
		if(x==ar[i])
		{
			return i+1;
		}
	}
	return 0;
}

int main()
{
	int n=5,x;
	float y;
	int arr[5]={1,8,4,16,100};
	float a[5]={1.2,53,4,8.9,3.6};
	cout<<"int array:"<<endl;
	cout<<"enter value to fetch "<<endl;
	cin>>x;
	int l=linear<int>(arr,n,x);							//int l=linear<int,5,int>(arr,n,x);
	if(l!=0)
		cout<<x<<" exists at "<<l<<"th position"<<endl;
	else
		cout<<"doesn't exist"<<endl;
	cout<<"float array:"<<endl;
	cout<<"enter value to fetch "<<endl;
	cin>>y;
	float lf=linear<float,int,float>(a,n,y);					//float lf=linear<float,5,float>(a,n,y);
	if(lf!=0)
		cout<<x<<" exists at "<<lf<<"th position"<<endl;
	else
		cout<<"doesn't exist"<<endl;
}
