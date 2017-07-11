#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1;
	int product = 6;
	double product1 = 10.50;
	double product2 = 20.20;
	double product3 = 2.40;
	double product4 = 19.99;
	double SubTotal1 = 0;
	double SubTotal2 = 0; 
	double SubTotal3 = 0; 
	double SubTotal4 = 0;
	double Sum = 0.0;
	while (i <= 1)
	{
		
		printf("Select a product:\nFor product 1 press 1\nFor product 2 press 2\nFor product 3 press 3\nFor product4 press 4\nFor Total press 5\nFor end press 0\n");
		scanf_s("%d", &product);

		if (product == 1)
		{
			int quantity = 0;
			printf("Enter quantity:\n");
			scanf_s("%d", &quantity);
			SubTotal1 = product1*quantity;
			printf("Product1: Quantity : %d : Subtotal: %0.2f $\n", quantity, SubTotal1);
		}
		else if (product == 2)
		{
			int quantity = 0;
			printf("Enter quantity:\n");
			scanf_s("%d", &quantity);
			SubTotal2 = product2*quantity;
			printf("Product2: Quantity : %d : Subtotal: %0.2f $\n", quantity, SubTotal2);

		}
		else if (product == 3)
		{
			int quantity = 0;
			printf("Enter quantity:\n");
			scanf_s("%d", &quantity);
			SubTotal3 = product3*quantity;
			printf("Product3: Quantity : %d : Subtotal: %0.2f $\n", quantity, SubTotal3);

		}
		else if (product == 4)
		{
			int quantity = 0;
			printf("Enter quantity:\n");
			scanf_s("%d", &quantity);
			SubTotal4 = product4*quantity;
			printf("Product2: Quantity : %d : Subtotal: %0.2f $\n", quantity, SubTotal4);

		}
		else if (product == 5)
		{
			Sum = SubTotal1 + SubTotal2 + SubTotal3 + SubTotal4;
			printf("Total: %0.2f $\n", Sum);
		}
		else
		{
			if (product == 0)
				break;
		}
	}
	system ("pause");
	return 0;
}