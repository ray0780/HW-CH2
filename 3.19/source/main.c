#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float loan, rate, day, sum;
	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &loan);

	while (loan != -1)
	{
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%f", &day);
		sum = loan * rate / 365 * day;
		printf("The interest charge is $%.2f", sum);
		printf("\n\n");
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &loan);
	}
	system("pause");
	return 0;
}