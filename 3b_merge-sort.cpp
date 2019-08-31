/*Program to sort the elements in ascending order using Merge Sort*/
#include <iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{
	int i,j,k,b[20];
	i=low;j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
			b[k++]=arr[i++];
		else
			b[k++]=arr[j++];
	}
	while(i<=mid)
		b[k++]=arr[i++];
	while(j<=high)
		b[k++]=arr[j++];
		
	for(k=low;k<=high;k++)
		arr[k]=b[k];
}

void merge_sort(int arr[],int low,int high)
{
	int mid;
	if(low>=high)
		return;
	mid=(low+high)/2;
	merge_sort(arr,low,mid);
	merge_sort(arr,mid+1,high);
	merge(arr,low,mid,high);
}
int main()
{
	int arr[100];
	int num;
	double time;
	clock_t start,end;
	cout<<"ENTER THE NUMBER OF ELEMENTS\n";
	cin>>num;
	cout<<"ENTER THE ARRAY ELEMENTS\n";
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	start=clock();
	merge_sort(arr,0,num-1);
	end=clock();
	cout<<"SORTED ARRAY\n";
	for(int i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
	time=(double)(end-start)/CLOCKS_PER_SEC;
	cout<<"\n Time complexity is "<<time<<" secs";
	return 0;	
}
