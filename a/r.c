#include<stdio.h>
int main()
{
	int a[50],i,n,j,temp;
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	printf("\nEnter %d no :",n);
	for (i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	j=n-1;
	for (i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
    	j--;
	}
	
	printf("\nReversed Array :");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}