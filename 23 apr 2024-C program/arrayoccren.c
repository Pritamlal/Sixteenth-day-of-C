#include<stdio.h>
int main()
{
	int arr[1000],freq[1000];
	int i,j,size,count;
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the numbers");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	
	for(i=0;i<size;i++)
{
	count=1;
	
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
			count++;
			freq[j]=0;
			}
		}
	
	if(freq[i]!=0)
	{
		freq[i]=count;
	}
}
	printf("Elements are \n");
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			printf("%d occurs %d times\n",arr[i],freq[i]);
		}
	}
	
	}
	
	

