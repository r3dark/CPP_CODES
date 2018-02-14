#include<stdio.h>
int min(int[],int,int);
main()
{int arr[10],n,i,temp,k,ptr,loc;
printf("enter the number of elements in the array\t");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
{
loc=min(arr,n,i);
temp=arr[i];
arr[i]=arr[loc];
arr[loc]=temp;
}for(i=0;i<n;i++)
printf("%d",arr[i]);}

int min(int arr[],int n,int i)
{int min=arr[i],j,loc=i;
for(j=i+1;j<n;j++)
{if(arr[j]<min)
{min=arr[j];
loc=j;
}}
return loc;}
