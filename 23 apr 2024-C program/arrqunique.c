#include<stdio.h>
int main()
{
	int i,j,arr[1000],freq[1000];
	int size,count;
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the elements::");
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
	printf("\n Unique elements:");
	for(i=0;i<size;i++)
	{
		if(freq[i]==1)
		{
			printf("%d ",arr[i]);
		}
	}
	
}
