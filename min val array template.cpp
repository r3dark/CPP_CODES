#include<iostream>
using namespace std;
template <class t, int val>
void min(t*ar, t n=val)
{
	int i,j;
	t c=ar[0];
	for(i=0;i<n;i++)
	{
		if(c>ar[i])
		{
			c=ar[i];
		}
	}
	cout<<"min element is "<<c<<endl;
}

int main()
{
	int n,i;
	cout<<"int array:"<<endl;
	cout<<"enter size of array "<<endl;
	cin>>n;
	int arr[n];		//={10,8,4,16,100};
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	min<int,5>(arr,n);
	cout<<"float array:"<<endl;
	cout<<"enter size of array "<<endl;
	cin>>n;
	float a[n];		//={10,8,4,16,100};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min<float,5>(a,n);
}
