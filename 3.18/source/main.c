#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float dollar, salary;

	printf("Enter ssales in dollars (-1 to end): ");
	scanf_s("%f", &dollar);
	while (dollar != -1)
	{
		salary = dollar * 0.09+ 200;
		printf("Salary is: %.2f\n", salary);
		printf("\n");
		printf("Enter ssales in dollars (-1 to end): ");
		scanf_s("%f", &dollar);
	}
	system("pause");
	return 0;
}