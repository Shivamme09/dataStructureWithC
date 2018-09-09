#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k, no,numbers=1;
	int coef,space;
	printf("\n Enter How many lines you u want ::");
	scanf("%d", &no);
	for(i=1; i<=no; i++)
		{
			for(j=1; j<=i; j++)
			{
				printf(" # ");

			}printf(" ");
			//getchar();
			for(k=no;k<=i; k--)
			{
				printf(" # ");
			}

			printf("\n");
		}
		return EXIT_SUCCESS;
}// end of main
