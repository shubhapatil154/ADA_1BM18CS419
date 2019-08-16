#include<stdio.h>
void getdata(int *a,int *n)
{
        int i;
        printf("ENTER THE SIZE OF ARRAY\n");
        scanf("%d",n);
        printf("ENTER THE ELEMENTS\n");
        for(i=0;i<*n;i++)
        {
                scanf("%d",a);
                a++;
        }
}
int compute_max(int* a,int n)
{
        int i;
        int temp=a[0];
        for(i=0;i<n;i++)
        {
                if(temp<a[i])
                {
                        temp=a[i];
                }

        }
        return temp;
}
int main()
{
        int arr[100];
        int *ptr;
        int largest,n;
        ptr=arr;
        getdata(ptr,&n);
        largest=compute_max(ptr,n);
        printf("LARGEST OF THE ELEMENTS IS %d",largest);
        return 0;
}
