#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int who;
	float weeklysalary, hours, hourssalary, sales, produce,item=20.00;
	
	while (0 == 0)
	{
		printf("Managers have paycode 1.\n");
		printf("Hourly workers have code 2.\n");
		printf("Commission workers have code 3.\n");
		printf("Pieceworkers have code 4. (code -1 to end):");
		scanf_s("%d", &who);

		if (who == -1)
		{
			break;
		}
		switch (who)
		{
			case 1:
				printf("\n");
				printf("Enter a fixed weekly salary:");
				scanf_s("%f", &weeklysalary);
				printf("Salary is $%.2f", weeklysalary);
				break;
			case 2:
				printf("\n");
				printf("Enter # of hours worked: ");
				scanf_s("%f", &hours);
				printf("Enter hourly rate of the worker: ");
				scanf_s("%f", &hourssalary);

				if (hours <= 40)
				{
					printf("Salary is $%.2f", hours*hourssalary);
				}
				else
				{
					printf("Salary is %.2f", hourssalary * 40 + (hours - 40)*1.5*hourssalary);
				}
				break;
			case 3:
				printf("\n");
				printf("Enter gross weekly sales: ");
				scanf_s("%f", &sales);
				printf("Salary is $%.2f",sales*0.057 + 250);
				break;
			case 4:
				printf("\n");
				printf("Enter # of the items produce: ");
				scanf_s("%f", &produce);
				printf("Salary is $%.2f", item*produce);
				break;
		}
		printf("\n\n");
	}
	system("pause");
	return 0;
}