#include <stdio.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int sort_search(int a[],int n,int k)
{
	int i,j,min;
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		swap(&a[i],&a[min]);
	}
	return a[k-1];
}


int main()
{
	int arr[100];
	int num,i;
	int k,k_thele;
	printf("ENTER THE NUMBER OF ELEMENTS IN AN ARRAY\n");
	scanf("%d",&num);
	printf("ENTER THE ARRAY ELEMENTS\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("ENTER  K\n");
	scanf("%d",&k);
	k_thele=sort_search(arr,num,k);
	printf("K_TH SMALLEST ELEMENT IS %d\n",k_thele);
   return 0;
}
