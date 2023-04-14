#include<stdio.h>
#define size 6
int main()
{
        int ar[size]={1,2,1,4,5,5};
        int i,j,k,ct;
        for(i=0;i<size-1;i++)
        { 
		printf("loop i index=%d element=%d\n",i,ar[i]);
		ct=0;
                for(j=i+1;j<size-1;j++)
                {
			printf("Loop j index=%d:element=%d\n",j,ar[j]);
			if(ar[i]==ar[j])
			{
				for(k=j;k<size-1;k++)
				{
				printf("Loop K index=%d:Element=%d\n",k,ar[k]);
				ar[k]=ar[k+1];
				}
			}

		}
		ar[k]=-1;
		if(ar[i]>-1)
		{		
		printf("%d\n",ar[i]);
		}
	}
        return 0;
}

