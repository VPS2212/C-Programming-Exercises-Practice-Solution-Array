#include<stdio.h>
int main()
{
	int ar[10],n;
	int i,j;
	int ar2[10];
	int ar3[10];
	printf("Enter the Number of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<=n;j++)
	{
		if(ar[i]==ar[j])
		{
		ar2[i]=ar[j];
		ar2[i++];
		}
	}	
	}
	for(i=0;i<n;i++)
 	{
	if(ar2[i]>0)
	{
	printf("Duplicate number are:%d\n",ar2[i]);
	}
	}	
	return 0;
}

