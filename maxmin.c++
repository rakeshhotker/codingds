#include<iostream>
using namespace std;
struct Pair
{
	int min=0;
	int max=0;
};
struct Pair getMinMax(int arr[],int n)
{
	struct Pair minMax;
	int i=0;
	if(n%2==0)
	{
		if(arr[0]>arr[1])
		{
			minMax.max=arr[0];
			minMax.min=arr[1];
		}
		else
		{
			minMax.max=arr[1];
			minMax.min=arr[0];
		}
		i+=2;
	}
	else
	{
		minMax.min=minMax.max=arr[0];
		i+=1;
	}
	while(i<n-1)
	{
		if(arr[i]>arr[i+1])
		{
			if(arr[i]>minMax.max)
			{
				minMax.max=arr[i];
			}
			if(arr[i+1]<minMax.min)
			{
				minMax.min=arr[i+1];
			}
		}
		else
		{
			if(arr[i+1]>minMax.max)
			{
				minMax.max=arr[i+1];
			}
			if(arr[i]<minMax.min)
			{
				minMax.min=arr[i];
			}
		}
		i+=2;
	}
	return minMax;
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
	struct Pair minMax=getMinMax(arr,n);
	cout<<"Minimum element is"<<minMax.min;
	cout<<"\nMaximum element is"<<minMax.max;
	return 0;
}
