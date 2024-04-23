#include<stdio.h>
#include<limits.h>

int main()
{
	int arr[100],i,n,max1,max2;
	printf("Enter the size::");
	scanf("%d",&n);
	printf("Enter the elements::");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	} 
	
	max1=max2=INT_MIN;
	for(i=1;i<=n;i++)
	{
	if(arr[i]>max1)
	{
		max2=max1;
		max1=arr[i];
	}
	else if(arr[i]>max2 && arr[i]<max1)
	{
		max2=arr[i];
	}
}
printf("The first element is %d\n",max1);
printf("The second element is %d",max2);
}
