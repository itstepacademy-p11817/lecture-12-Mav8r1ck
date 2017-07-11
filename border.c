#include <stdio.h>
#include <stdlib.h>


int main()
{
	int Border1, Border2, number;
	int i = 0;
	printf("Enter Border1\n");
	scanf_s("%d", &Border1);
	printf("Enter Border2\n");
	scanf_s("%d", &Border2);
	printf("Enter number\n");
		while (i = 1)
		{
			scanf_s("%d", &number);
			if (number >= Border1&&number <= Border2)
			{
				printf("Number in borders!\n");
				i++;
			}
			else
			{
				printf("Re-enter number\n");
			}
		}
		system("pause");
		return 0;
}
