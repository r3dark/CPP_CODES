#include<iostream>
using namespace std;
template<class t,int val>
void bubblesort(t*arr,int n=val)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t q=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=q;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	int n=5;
	int arr[5]={2,4,9,1,25};
	float a[5]={1.2,53,4,8.9,3.6};
	cout<<"int array:"<<endl;
	bubblesort<int,5>(arr,n);
	cout<<"float array:"<<endl;
	bubblesort<float,5>(a,n);
}
