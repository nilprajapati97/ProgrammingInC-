#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number oflines to be printed\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(!(j%2==0))
			printf("1 ");
			else
			printf("0 ");
		}
		printf("\n");
	}
}
