#include <stdio.h>
#include <math.h>

int Number_1()
{
	int a;
	printf("Nomer 1\n");
	printf("\nVvedite razmer faila v baitax:\n");
	scanf_s("\n%d", &a);
	a = a / 1024;
	printf("Perevedem bayti v kilobayti:\n%d",a);
	return 0;
}

int Number_2()
{
	int A, B,a;
	printf("\n\nNomer 2\n");
	printf("\nVvedite dva chisla , takie , chto A > B:\n");
	printf("\nVvedite A\n");
	scanf_s("%d", &A);
	printf("\nVvedite B\n");
	scanf_s("%d", &B);
	a = A / B ;
	printf("\nNa otrezke dlini %d mojet pomestitsya %d otrezkov dlini %d", A, a, B);
	return 0;
}

int Number_3()
{
	int A,B,a,b,c;
	printf("\n\nNomer 3\n");
	printf("\nVvedite dva chisla , takie , chto A > B:\n");
	printf("\nVvedite A\n");
	scanf_s("%d", &A);
	printf("\nVvedite B\n");
	scanf_s("%d", &B);
	a = A / B;
	c = a * B;
	b = A - c;
	printf("\nNaidem dlinu nezanyatoy chasti otrezka A:\n%d",b);
	return 0;
}

int Number_4()
{
	printf("\n\nNomer 4\n");
	int f,a,b,c,d;
	printf("Vvedite dvuznachnoe chislo:\n");
	scanf_s("%d", &f);
	a = f / 10;
	b = f % 10;
	printf("Pomenyaem cifri mestami :\n%d%d",b,a);
	return 0;
}

int Number_5()
{
	printf("\n\nNomer 5\n");
	int f, a, b, c, d,e;
	printf("Vvedite trexznachnoe chislo chislo:\n");
	scanf_s("%d", &f);
	a = f / 100;//Первая цифра
	b = (f / 10) % 10;//Вторая цифра
	c = f % 10;//Последняя цифра
	printf("Pomenyaem cifri mestami :\n%d%d%d", b, c,a);
	return 0;
}

int main()
{
	Number_1();
	Number_2();
	Number_3();
	Number_4();
	Number_5();
	return 0;
}