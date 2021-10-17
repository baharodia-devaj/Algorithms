#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter the size of the array");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of the array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
	printf("\nEnter the element to be searched");
	scanf("%d",&key);
	int flag=0,p=0,q=n,mid,pos;
	while(p<=q)
	{
		mid=(p+q)/2;
		if(arr[mid]==key)
		{
			flag=1;
			pos=mid;
			break;
		}
		else if(arr[mid]>key)
		{
			q=mid-1;
		}
		else
		{
			p=mid+1;
		}
	}
	if(flag==1)
	printf("\nThe element %d is found at index %d",key,pos);
	else
	printf("\nThe element %d is not present in the array",key);
	return 0;
}
