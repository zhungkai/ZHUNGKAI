#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double power(double a,int b);
double main()
{
	int k;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k);
	printf("3.5��%d����=%lf\n",k,power(3.5,k));
	system("pause");
}
double power(double a,int b)
{
	return pow(3.5, b);
}