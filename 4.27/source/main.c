#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int side1, side2, c;
	int sq,sq1;
	for (side1 = 1; side1 <= 500; side1++)
	{
		for (side2 = 1; side2 <= 500; side2++)
		{
			for (c = 1; c <= 500; c++)
			{
				sq = pow(side1, 2) + pow(side2, 2);
				sq1 = pow(c, 2);
				if ( sq1 == sq && side1+side2>c && side2+c>side1 && side1+c>side2)
				{
					printf(" %3d %3d %3d\n", side1, side2, c);
				}

			}
		}
	}
	system("pause");
	return 0;

}