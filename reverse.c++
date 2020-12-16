#include<iostream>
using namespace std;
void swap(int *x,int *y);
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void swapArray(int arr[],int n)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		swap(arr[low],arr[high]);
		low++;
		high--;
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
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	swapArray(arr,n);
	printArray(arr,n);
	return 0;
}