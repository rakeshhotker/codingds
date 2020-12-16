#include<iostream>
#include<climits>
using namespace std;
class MinHeap
{
	int heap_size;
	int *harr;
	public:
		MinHeap(int arr[],int size);
		int parent(int i){return (i-1)/2;}
		int left(int i){return (2*i+1);}
		int right(int i){return (2*i+2);}
		int getMin()
		{
			return harr[0];
		}
		int extractMin();
		void MinHeapify(int i);
};
MinHeap::MinHeap(int arr[],int size)
{
	heap_size=size;
	harr=arr;
	int i=(heap_size-1)/2;
	while(i>=0)
	{
		MinHeapify(i);
		i--;
	}
}
void MinHeap::MinHeapify(int i)
{
	int l=left(i);
	int r=right(i);
	int smallest=i;
	if(l<heap_size && harr[l]<harr[smallest])
	{
		smallest=l;
	}
	if(r<heap_size && harr[r]<harr[smallest])
	{
		smallest=r;
	}
	if(smallest!=i)
	{
		swap(harr[i],harr[smallest]);
		MinHeapify(smallest);
	}
}
int MinHeap::extractMin()
{
	if(heap_size<=0)
	{
		return INT_MAX;
	}
	int root=harr[0];
	if(heap_size>1)
	{
		harr[0]=harr[heap_size-1];
		MinHeapify(0);
	}
	return root;
}
int kthSmallest(int arr[],int n,int k)
{
	MinHeap mh(arr,n);
	for(int i=1;i<k;i++)
	{
		mh.extractMin();
	}
	return mh.getMin();
}
int main()
{
	cout<<"Enter the size\n";
	int n;
	cin>>n;
	int arr[n];
	cout<<"\nEnter the k ";
	int k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"K'th Smallest element is "<<kthSmallest(arr,n,k);
	return 0;
}

	