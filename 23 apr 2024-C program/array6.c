#include<stdio.h>
int main()
{
	int source[1000],dest[1000],i,size;
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the numbers::");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&source[i]);
	}
	for(i=1;i<=size;i++)
	{
		dest[i]=source[i];
	}
	
	printf("\nElement of source array are:");
	for(i=1;i<=size;i++)
	{
		printf("%d ",source[i]);
		
	}
	
	printf("\nElements of destination array are::");
	for(i=1;i<=size;i++)
	{
		printf("%d ",dest[i]);
	}
}
