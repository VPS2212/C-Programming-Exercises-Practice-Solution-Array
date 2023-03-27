#include<stdio.h>
int main()
{
	int ar[10];
	int i;
	printf("Enther the Elements in the array");
	for(i=0;i<10;i++)
	{
		printf("element %d\n",i);
		scanf("%d",&ar[i]);
	}
	printf("Elements in array are:");
	for(i=0;i<10;i++)
	{
		printf("%d\n",ar[i]);
	}
	return 0;
}

