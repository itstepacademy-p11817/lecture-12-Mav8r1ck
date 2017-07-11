#include<stdio.h>
#include<stdlib.h>

int main() {

	int b = 999999;
	int sum = 0;
	for (int i = 0; i <= b; i++) 
	{

		int c = i  % 10 + i / 10 % 10 + i / 100 % 10;
		int d = i / 1000 % 10 + i / 10000 % 10 + i / 100000 % 10;
		if (c == d) 
		{
			sum++;
		}
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}