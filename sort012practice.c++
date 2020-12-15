#include<iostream>
using namespace std;
void PrintArr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void sortArr012(int arr[],int n)
{
	int i,cnt0=0,cnt1=0,cnt2=0;
	for(i=0;i<n;i++)
	{
		switch(arr[i])
		{
			case 0:
				cnt0++;
				break;
			case 1:
				cnt1++;
				break;
			case 2:
				cnt2++;
				break;
		}
	}
	//update i to 0(start)
	i=0;
	while(cnt0>0)
	{
		arr[i++]=0;
		cnt0--;
	}
	while(cnt1>0)
	{
		arr[i++]=1;
		cnt1--;
	}
	while(cnt2>0)
	{
		arr[i++]=2;
		cnt2--;
	}
}
int main()
{
	int arr[]={0,1,2,2,1,0,2,0,1,2,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	sortArr012(arr,n);
	PrintArr(arr,n);
	return 0;
}
	