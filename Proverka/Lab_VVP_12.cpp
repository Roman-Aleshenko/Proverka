/*#include <stdio.h>
#include <math.h>
int Number_1()
{
	float a, b, c, d, f, g, i, j, k, l;
	printf("Nomer 1\n");
	printf("\nVveedite cenu za 1 rilogramm konfet:\n");
	scanf_s("\n%f", &a);
	b = a * 0.1;
	c = a * 0.2;
	d = a * 0.3;
	f = a * 0.4;
	g = a * 0.5;
	i = a * 0.6;
	j = a * 0.7;
	k = a * 0.8;
	l = a * 0.9;
	printf("\n0,1kg stoit:%f\n0,2kg stoit:%f\n0,3kg stoit:%f\n0,4kg stoit:%f\n0,5kg stoit:%f\n0,6kg stoit:%f\n0,7kg stoit:%f\n0,8kg stoit:%f\n0,9kg stoit:%f\n1kg stoit:%f", b, c, d, f, g, i, j, k, l, a);
	return 0;
}
int Number_2()
{
	int a;
	float b = 1.1,c=1;
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++)
	{
		c *= b;
		b += 0.1;
	}
	printf("%f", c);
	return 0;
}
int Number_3()
{
	int N,a,b;
	printf("Vvedite chislo > 0:\n");
	scanf_s("\n%d", &N);
	b = 0;
	for (a = 1; a<N+1;a+=1)
	{
		b = b + 2 * a - 1;
	}
	printf("%d",b);
	return 0;
}
int Number_4()
{
	int A, a, b,N;
	printf("Vvedite chislo > 0:\n");
	printf("A=");
	scanf_s("\n%d", &A);
	printf("N=");
	scanf_s("\n%d", &N);
	b = 0;
	for (a = 1; a < N + 1; a++)
	{
		b = b + pow(A, a);
	}
	b = b + 1;
	printf("\n\n%d", b);
	return 0;
}
int Number_5()
{
	float A, rez = 1;
	int N,i;
	printf("Vvedite chislo > 0:\n");
	printf("A=");
	scanf_s("\n%f", &A);
	printf("N=");
	scanf_s("\n%d", &N);
	for (i = 1; i <= N;i++)
	{
		rez += pow(-A, i);
	}
	printf("%f", rez);
	return 0;
}
int main()
{
	Number_5();
	return 0;
}*/

