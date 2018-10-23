#include<stdio.h>
#include<stdlib.h>
int big(int a, int b, int c);

int main()
{
	int number1;
	int number2;
	int number3;
	printf("Enter three integers:");
	scanf_s("%d %d %d",& number1, &number2, &number3);
	printf("Maximum is:%d\n", big(number1, number2, number3));
	system("pause");
}
int big(int a, int b, int c)
{
	int max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	return max;
}