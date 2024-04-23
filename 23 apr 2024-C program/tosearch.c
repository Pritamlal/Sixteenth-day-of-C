#include<stdio.h>
int main()
{
	int i,tosearch,size,a[1000];
	printf("Enter the size:\n");
	scanf("%d",&size);
	printf("Enter the elements::\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search\n");
	scanf("%d",&tosearch);
	
	for(i=0;i<size;i++)
	{
		if(a[i]==tosearch)
		{
			printf("found at index %d",i+1);
		}
	}
}
