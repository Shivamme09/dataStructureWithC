#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k, no,numbers=1;
	int coef;
	printf("\n Enter How many lines you u want ::");
	scanf("%d", &no);
	for(i=no;i>=1;i--)
	{
		for(j=0;j<=no-i;j++)
		{
			printf("  ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
		return EXIT_SUCCESS;
}// end of main
