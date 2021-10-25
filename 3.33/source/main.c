#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j,len,bre;
	printf("Enter lenght: ");
	scanf_s("%d", &len);
	printf("Enter breadth: ");
	scanf_s("%d", &bre);
	for (i = 1; i <= len; i++)
	{
		for (j = 1; j <= bre; j++)
		{
			if ((i != 1) && (i != len) && (j != 1) &&  (j != bre))
			{
				printf(" ");
			}
			else
			{
				printf("+");
			}
		}	
		printf("\n");
	}
	system("pause");
	return 0;
}