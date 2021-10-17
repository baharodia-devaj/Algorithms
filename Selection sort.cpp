#include<stdio.h>
int main()
{
	int i,j,temp,n;
	printf("\nEnter the size of the array");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nThe array elements after sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
