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
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
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
