#include<stdio.h>
int main()
{
	int i,j,temp,arr[1000],size;
	printf("Enter the size::\n");
	scanf("%d",&size);
	printf("Enter the element::\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("Elements are in Array::\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
