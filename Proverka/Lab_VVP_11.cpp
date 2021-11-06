#include <stdio.h> 
#include <math.h>
int Number_1()
{
	int a, b, A, B, t;
	printf("Nomer 1\n");
	printf("Vvedite dva celix chisla:\n");
	scanf_s("\n%d\n%d", &a, &b);
	t = a > b;
	if (a != b)
	{
		if (t == true)
		{
			A = a;
			B = a;
			printf("\n\nNovie znacheniya chisel : \nA = %d\nB = %d", A, B);
			return 0;
		}
		else
		{
			A = b;
			B = b;
			printf("\n\nNovie znacheniya chisel : \nA = %d\nB = %d", A, B);
			return 0;
		}


	}
	if (a == b)
	{
		A = 0;
		B = 0;
		printf("\n\nNovie znacheniya chisel : \nA = %d\nB = %d", A, B);
		return 0;
	}
}


int Number_2()
{
	int a, b, c, sum;
	printf("\n\nNomer 2\n");
	printf("Vvedite tri chisla:\n");
	scanf_s("\n%d\n%d\n%d", &a, &b, &c);
	if (a <= b && a <= c) 
	{ 
		sum = b + c; 
		printf("\n%d", sum);
	}
	if (b <= c && b <= a) 
	{ 
		sum = a + c; 
		printf("\n%d", sum);
	}
	if (c <= a && c <= b) 
	{ 
		sum = a + b; 
		printf("\n%d", sum);
	}
	return 0;
}

int Number_3()
{
	int  Ax,Ay,Bx,By,Cx,Cy;
	float dA, dC;
	printf("\n\nNomer 3\n");
	printf("Vvedite coordinati trex chisel:\n");
	scanf_s("\n%d\n%d\n%d\n%d\n%d\n%d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);
	dA = sqrtf(pow((Bx - Ax), 2) + pow((By - Ay), 2));
	dC = sqrtf(pow((Ax - Cx), 2) + pow((Ay - Cy), 2));
	if (dA < dC)
	{
		printf("\nBlije raspolojena tochka 'B'\nRasstoyanie = %f", dA);
	}
	if (dA > dC)
	{
		printf("\nBlije raspolojena tochka 'C'\nRasstoyanie = %f", dC);
	}
	return 0;
}

int Number_4()
{
	int Ax, Ay;
	printf("\n\nNomer 4\n");
	printf("\nVvedite coordinati tochki na ploskosti:\n");
	scanf_s("\n%d\n%d", &Ax,&Ay);
	if ((Ax > 0) & (Ay > 0))
	{
		printf("\nChetvert 1");
	}
	if ((Ax < 0) & (Ay > 0))
	{
		printf("\nChetvert 2");
	}
	if ((Ax < 0) & (Ay < 0))
	{
		printf("\nChetvert 3");
	}
	if ((Ax > 0) & (Ay < 0))
	{
		printf("\nChetvert 4");
	}
	return 0;
}

int Number_5()
{
	int a;
	printf("\n\nNomer 5\n");
	printf("Vvedite celoe chislo:\n");
	scanf_s("\n%i", &a);
	if (a == 0)
	{
		printf("\nNulevoe chislo");
	}
	if ((a < 0) & (a % 2 == 0))
	{
		printf("\nOtricatelnoe chetnoe chislo");
	}
	if ((a < 0) & (a % 2 != 0))
	{
		printf("\nOtricatelnoe nechetnoe chislo");
	}
	if ((a > 0) & (a % 2 == 0))
	{
		printf("\nPolojitelnoe chetnoe chislo");
	}
	if ((a > 0) & (a % 2 != 0))
	{
		printf("\nPolojitelnoe nechetnoe chislo");
	}
	return 0;
}

int Number_6()
{
	int a,b;
	printf("\n\nNomer 6");
	printf("\nVvedite celoe chislo ot 1 do 999:\n");
	scanf_s("\n%i", &a);
	b = a;
	if ((a % 100 == b) & (a % 2 == 0))
	{
		printf("\nChislo dvyznachnoe chetnoe");
	}
	if ((a % 100 == b) & (a % 2 != 0))
	{
		printf("\nChislo dvyznachnoe nechetnoe");
	}
	if ((a % 1000 == b) & (a % 2 == 0))
	{
		printf("\nChislo trexznachnoe chetnoe");
	}
	if ((a % 1000 == b) & (a % 2 != 0))
	{
		printf("\nChislo trexznachnoe nechetnoe");
	}
	return 0;
}

int main()
{
	Number_1();
	Number_2();
	Number_3();
	Number_4();
	Number_5();
	Number_6();
	return 0;
}