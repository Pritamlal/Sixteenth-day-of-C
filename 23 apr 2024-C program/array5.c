#include<stdio.h>
int main()
{
	int negcount,i,size,a[1000];
	printf("Enter the number::");
	scanf("%d",&size);
	printf("Enter the elements::");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&a[i]);
	}
	negcount=0;
	for(i=1;i<=size;i++)
	{
		if(a[i]<0)
		{
			negcount++;
		}
	}
	printf("Negative count are %d",negcount);
}
