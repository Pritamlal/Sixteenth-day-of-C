#include<stdio.h>
int main()
{
	int size,i,insert,element;
	int a[1000];
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the elements::");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element to insert::");
	scanf("%d",&element);
	printf("Enter the postion to insert::");
	scanf("%d",&insert);
	
	if(insert>size+1 || insert<=0)
	{
		printf("Invalid yah");
	}
	else
	{
		for(i=size;i>=insert;i--)
		{
			a[i]=a[i-1];
		}
		a[insert-1]=element;
		size++;
		
		printf("Elements after insetion::");
		for(i=0;i<size;i++)
		{
			printf("%d ",a[i]);
		}
	}
	
}
