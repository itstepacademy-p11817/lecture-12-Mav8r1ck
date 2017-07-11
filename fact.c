#include<stdlib.h>
#include<stdio.h>

int main()
{
	int k;
	int i = 1;
	printf("Enter number\n");
	scanf_s("%d", &k);
	double Sum = 0;
	
	while (i <= k) 
	{
		int fact = 1;
		for (int a = 1 ; a <= i; a++)
		{
			fact *= a;
		}
		Sum += (1.0 / fact);
		i++;
	}
	printf("%f\n", Sum);
	system("pause");
	return 0;
}