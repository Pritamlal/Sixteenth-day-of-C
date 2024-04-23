#include<stdio.h>
int main()
{
	int arr[1000];
	int i,j,k;
	int size;
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the elements::");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
			
			for(k=j;k<size-1;k++)
			{
				arr[k]=arr[k+1];
			}
			size--;
			j--;
		}
	}
}
printf("Element array:::");
for(i=0;i<size;i++)
{
	printf("%d ",arr[i]);
}
}
