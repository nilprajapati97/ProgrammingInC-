#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=1;j<=(n*2)-2*(i);j++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
