#include<iostream>
using namespace std;
void sort012(int arr[],int size)
{
	int low=0;
	int mid=0;
	int high=size-1;
	while(mid<=high)
	{
		switch(arr[mid])
		{
			case 0:
				swap(arr[low++],arr[mid++]);
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(arr[mid],arr[high--]);
				break;
		}
	}
}
void printArr(int arr[],int size)
{
	int n=size;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[]={0,1,2,1,2,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort012(arr,n);
	printArr(arr,n);
	return 0;
}
		