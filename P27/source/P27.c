#include<stdio.h>
#include<stdlib.h>
long factorial(long number);
int main()
{
	int a;
	for (a = 0; a <= 10; a++)
	{
		printf("%d! = %d\n", a,factorial(a));
	}
	system("pause");
}
long factorial(long number)
{
	if (number> 1)
		return  factorial(number-1)*number;
	else
		return 1;
}