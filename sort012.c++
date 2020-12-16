#include<iostream>
using namespace std;
int* sort012(int arr[],int n)
{
	int low=0;
	int high=n-1;
	int cnt0=0;
	int cnt1=0;
	int cnt2=0;
	int i=0;
	while(low<=high)
	{
		switch(arr[low])
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
		low++;
	}
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
	return arr;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int* p=sort012(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<p[i]<<" ";
	}
	return 0;
}

	