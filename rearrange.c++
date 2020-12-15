#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void swapNegativePositive(int arr[],int n)
{
	int low=0;
	int high=n;
	int j=0;
	while(low<high)
	{
		if(arr[low]>0)
		{
			if(low!=j)
			{
				swap(arr[low],arr[j]);
			}
			j++;
		}
		low++;
	}
}

void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[]={-1,2,-3,4,5,6,-7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	swapNegativePositive(arr,n);
	printArray(arr,n);
	return 0;
}

			