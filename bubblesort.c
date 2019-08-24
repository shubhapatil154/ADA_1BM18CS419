#include <stdio.h>

void swap(int *a,int *b,int *large)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

/*int sort_search(int a[],int n,int k)
{
	int i,j,max;
	for(i=0;i<k;i++)
	{
		max=i;
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]>a[max])
				min=j;
		}
		swap(&a[i],&a[max]);
	}
	return a[k-1];
}*/

int sort_search(int a[],int n,int large,int k)
{
	int i,j;
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<n-i-1;j++)
		{
			if(a[j+1]>a[j])
			{
				swap(&a[j+1],&a[j]);
			}
		}
	}
}

int main()
{
	int arr[100];
	int num,i;
	int k;
	int l[k];
	printf("ENTER THE NUMBER OF ELEMENTS IN AN ARRAY\n");
	scanf("%d",&num);
	printf("ENTER THE ARRAY ELEMENTS\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("ENTER  K\n");
	scanf("%d",&k);
	sort_search(arr,num,k,l);
	printf("THE LARGEST ELEMENTS ARE\n");
	for(i=0;i<k;i++)
	{
		printf("")
	}
}
