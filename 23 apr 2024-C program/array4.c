#include<stdio.h>
int main()
{
	int oddcount,evencount,a[1000],size,i;
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the elements::");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&a[i]);
	}
	evencount=0;
	oddcount=0;
	for(i=1;i<=size;i++)
	{
		if(a[i]%2==0)
		{
			evencount++;
			
		}
		
		else if(a[i]%2!=0)
		{
			oddcount++;
			
		}
		
	}
	printf("Evencounts are %d\n",evencount);
	printf("Oddcounts are %d",oddcount);
}
