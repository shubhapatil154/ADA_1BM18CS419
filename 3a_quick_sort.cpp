                    
    #include<iostream>
    using namespace std;
    
	void selection_sort(int arr[],int n)
	{
		int c[100],counts=0;
		int i,j,temp,min;
		for(int i=0;i<n-1;i++)
			{
                    c[i]=arr[i];
			}
		for( i=0;i<=n-1;i++)
		{
			min=i;
			for(j=i+1;j<n;j++)
				{
					counts++;
                    if(c[j]<c[min])
						{
							min=j;
						}
				}
				temp=c[i];
				c[i]=c[min];
				c[min]=temp;
		}
		cout<<"\n Number of comparisons in selection sort=    "<<counts<<"\n";
    }
    void bubble_sort(int arr[],int n)
	{
		int c[100],counts=0;
		int i,j,temp;
		for(int i=0;i<n;i++)
			{
                    c[i]=arr[i];
			}          
		for(i=0;i<=n-2;i++)
		{
			for(j=0;j<=n-2-i;j++)
			{
				counts++;
				if(c[j+1]<c[j])
					{
						temp=c[j];
						c[j]=c[j+1];
						c[j+1]=temp;
                        
                    }
                }
            }
			cout<<"SORTED ARRAY OF ELEMENTS \n";
				for(int i=0;i<n;i++)
			cout<<C[i]<<"\t";
            cout<<"\n Number of comparisons in bubble sort=     "<<counts<<"\n";
            }
void merge_sort(int cc[],int low,int mid,int high)
{
	int count=0;
	int c[100];
	int i=low,j=mid+1,k=low;
	while(i<=mid && j<=high)
	{
		count++;
		if(cc[i]<cc[j])
			{
                c[k++]=cc[i++];
			}
		else
		{
			c[k++]=cc[j++];
		}
	}
	if(i>mid)
		{
            while(j<=high)
				{
					c[k++]=cc[j++];
				}
         }
         if(j>high)
		{
			while(i<=mid)
				{
					c[k++]=cc[i++];
				}
		}
		for(int t=0;t<=high;t++)
		{
			cc[t]=c[t];
		}
		//cout<<"in merge sort "<< count<<"\n";
}
void split(int a[],int low,int high)
{
	if(low<high)
		{
			int  mid=((low+high)/2);
			split(a,low,mid);
			split(a,mid+1,high);
			merge_sort(a,low,mid,high);
         }
}
    
    int main()
	{
		int arr[100],low,high,n;
		double time;
		clock_t start,end;
        cout<<"ENTER SIZE OF ARRAY\n";
		cin>>n;
		cout<<"ENTERNTHE ARRAY ELEMENTS\n";
		for(int i=0;i<n;i++)
			cin>>arr[i];
		low=0;
		high=n;
		start=clock();
		bubble_sort(arr,n);
        selection_sort(arr,n);
        split(arr,low,high);
		end=clock();
        //cout<<"\nin merge sort\t"<<count;
		time=(double)(end-start)/CLOCKS_PER_SEC;
		cout<<"\n Time complexity is "<<time<<" secs";
        return  0;
   	}
