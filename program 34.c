#include<stdio.h>
void main()
{
	int arr[100],i,n,mx,mn;
	printf("\n\n Find maximum and minimum element in an array:\n");
	scanf("%d",&n);
	printf("Input %d elements in array:");
	for(i=0;i<n;i++)
	{
		printf("element %d:",i);
		scanf("%d",&arr[i]);
	}
	mx=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>mx)
		{
			mx=arr[i];
		}
		}
		mn=arr[0];
		for(i=0;i<n;i++)
		{
		if(arr[i]<mn)
		{
			mn=arr[i];
		}
	}
	printf("Maximum element is: %d\n",mx);
	printf("Minimum element is: %d\n",mn);
}
