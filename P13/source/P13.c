#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double power(double a,int b);
double main()
{
	int k;
	printf("計算3.5的k次方?請輸入k=");
	scanf_s("%d", &k);
	printf("3.5的%d次方=%lf\n",k,power(3.5,k));
	system("pause");
}
double power(double a,int b)
{
	return pow(3.5, b);
}