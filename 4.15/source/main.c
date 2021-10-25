#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

	double principal = 5000.00;
	double rate = 0.1;
	int i, j;

	for (i = 1; i < 6; i++)
	{
		printf("  Year\tAmount on deposit  (rate = %.1f)\n",rate*100);
		for (j = 1; j < 16; j++)
		{
			double amount = principal *pow(1.0 + rate,j);
			printf("%4d%20.2f\n", j, amount);

		}
		rate = rate + 0.005;
		printf("\n");
	}
	system("pause");
	return 0;
}