#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int acc;
	float balance,charge, credit, limit, sum;

	printf("Enter account number ( -1 to end):");
	scanf_s("%d", &acc);

	while (acc != -1)
	{
		printf("Enter beginning balance:");
		scanf_s("%f", &balance);
		printf("Enter total charges:");
		scanf_s("%f", &charge);
		printf("Enter total credits:");
		scanf_s("%f", &credit);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);
		sum = balance + charge - credit;
		if (sum > limit)
		{
			printf("Account:       %d\n", acc);
			printf("Credit limit:  %.2f\n", limit);
			printf("Balance:       %.2f\n", sum);
			printf("Credit Limit Exceeded.");
			printf("\n");
		}
		printf("\n");
		printf("Enter account number ( -1 to end):");
		scanf_s("%d", &acc);
	}
	system("pause");
	return 0;
	
}