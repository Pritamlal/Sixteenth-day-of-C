#include<stdio.h>
int main()
{
	int a[1000];
	int N,i,pos;
	printf("Enter the elements::");
	scanf("%d",&N);
	printf("Enter the numbers::");
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to delete::");
	scanf("%d",&pos);
	
	if(pos<0 || pos>N)
	{
		printf("Invalid position!");
	}
	else
	{
		for(i=pos-1;i<N-1;i++)
		{
			a[i]=a[i+1];
		}
		N--;
		printf("\nElements of array after delete are : ");
        for(i=0; i<N; i++)
        {
            printf("%d ", a[i]);
        }
	}
	
}
