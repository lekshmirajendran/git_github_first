#include <stdio.h>
void main()
{
	int a[5]={5,3,4,1,2},i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		    }
		}
	}
	printf("sorted array\n");
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);

}