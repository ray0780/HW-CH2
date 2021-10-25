#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float work, rate, salary;

	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%f", &work);
	while (work != -1)
	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &rate);
		if (work > 40)
		{
			salary = rate * 40 + (work - 40)*rate*1.5;
			printf("Salary is $%.2f\n\n", salary);
		}
		else
		{
			salary = work * rate;
			printf("Salary is $%.2f\n\n", salary);
		}
		printf("Enter #of hours worked (-1 to end): ");
		scanf_s("%f", &work);
	}
	system("pause");
	return 0;
}