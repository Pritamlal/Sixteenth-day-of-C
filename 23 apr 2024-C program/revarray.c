#include<stdio.h>
int main()
{
	int i,arr[1000],size;
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the elements::");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
