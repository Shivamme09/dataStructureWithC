#include <stdio.h>
#include <stdlib.h>
void PrimeFactorsWithRec(int n);
// int counter=2;
int main(void)
{
	int no=24;
	PrimeFactorsWithRec(no);


	return EXIT_SUCCESS;
}// end of main
void PrimeFactorsWithRec(int n)
{
	static int counter=2;
	printf("\n n=%d [%u] counter=%d [%u]",n, &n, counter, &counter);
	getchar();
	if(n==1)
		return;
	else if(n%counter==0)
	{
		printf("%4d", counter);
		n/=counter;
	}
	else
		counter++;
	printf("\n n=%d [%u] counter=%d [%u]",n, &n, counter, &counter);
	PrimeFactorsWithRec(n);
}
