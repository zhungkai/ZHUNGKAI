#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	for (a = 1;a <= 20;a++)
	{
		printf("%10d", (rand() % 6 + 1));
		if (a % 5 == 0)
		{
			printf("\n");
		}
	}
	system("pause");
}