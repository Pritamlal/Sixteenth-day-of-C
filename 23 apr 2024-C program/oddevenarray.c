#include<stdio.h>
int printArray(int arr[],int len);
int main()
{
	int size,arr[1000],oddcount,evencount,i,even[1000],odd[1000];
	
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the numbers::");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	oddcount=0;
	evencount=0;
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==1)
		{
			odd[oddcount]=arr[i];
			oddcount++;
		}
		else
		{
			even[evencount]=arr[i];
			evencount++;
		}
	}
	printf("Elements of even arrays are:\n");
	printArray(even,evencount);
	printf("Elements of odd arrays are:\n");
	printArray(odd,oddcount);
}

int printArray(int arr[],int len)
{
	int i;
	printf("Elements in an Array::");
	for(i=0;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
