#include <stdio.h>

int main()
{
	int a, b;
	int sum;
	printf("Enter your first number: ");
	scanf("%d", &a);
	printf("Enter your second number: ");
	scanf("%d", &b);
	sum = a + b;
	printf("Sum of the numbers you entered is: %d\n", sum);
	return (0);
}
