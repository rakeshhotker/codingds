#include<bits/stdc++.h>
using namespace std;
void findFirstAndLast(int arr[],int n,int x)
{
	int first=-1,last=-1;
	for(int i=0;i<n;i++)
	{
		if(x!=arr[i])
		{
			continue;
		}
		if(first==-1)
		{
			first=i;
		}
		last=i;
	}
	if(first!=-1)
	{
		cout<<"First Occurence = " <<first;
		cout<<"\nLast Occurence = " <<last;
	}
	else
	{
		cout<<"Not Found";
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
	int k;
	cin>>k;
	findFirstAndLast(arr,n,k);
	return 0;
}