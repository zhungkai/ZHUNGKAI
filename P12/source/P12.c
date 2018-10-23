#include<stdio.h>
#include<stdlib.h>
int square(int a);
int main()
{
	int b;
	for (b = 1;b <= 10;b++)
	{
		printf("%d ", square(b));
	}
	printf("\n");
	system("pause");
}
int square(int a)
{
	return a * a;
}