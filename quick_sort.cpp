/*Program to sort the elements in ascending order using In-Place Sorting Algorithm */

#include <iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
	
	int pivot,i,j,temp;
	pivot=arr[low];
	i=low;
	j=high;
	while(i<=j)
	{
		while(arr[i]<=pivot)
			i++;
		while(arr[j]>pivot)
			j--;
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		temp=arr[low];
		arr[low]=arr[j];
		arr[j]=temp;
	return j;
	}
}

void quick_sort(int arr[],int low,int high)
{
	int pivot_pos;
	if(low<high)
	{
		pivot_pos=partition(arr,low,high);
		quick_sort(arr,low,pivot_pos-1);
		quick_sort(arr,pivot_pos+1,high);
	}
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
	quick_sort(arr,0,num-1);
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

