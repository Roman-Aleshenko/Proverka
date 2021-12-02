/*#include <stdio.h>

int Number_1()
{
int A, B, t;
t = true;
printf("Nomer 1\n\nVvedite dva celix chisla:\n");
scanf_s("%d\n%d", &A, &B);
if (((A > 2) & (B <= 3)) == t)
{
	printf("\nNeravenstvo spravedlivo");
	return 0;
}
else
{
	printf("\nNeravenstvo nespravedlivo");
	return 0;
}
return 0;
}
int Number_2()
{
	int a, b, c;
	printf("\nvvedite tri celix chisla\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (((a<b)&(b<c))==true)
	{
		printf("neravenstvo spravedlivo");
		return 0;
	}
	else
	{
		printf("neravenstvo nespravedlivo");
		return 0;
	}
	return 0;
}
int Number_3()
{
	int A;
	printf("\n\nNomer 3\n\nVvedite celoe chislo:\n");
	scanf_s("\n%d", &A);
	if ((A % 2 == 0) & (A % 100 == A))
	{
		printf("\nEto chislo chetnoe dvuznachnoe");
		return 0;
	}
	else
	{
		printf("\nChislo ne podxodit");
		return 0;
	}
	return 0;
}
int Number_4()
{
	int A, z1, x, c2, v3;
	printf("\n\nNomer 4\n\nVvedite trexznachnoe chislo:\n");
	scanf_s("\n%d", &A);
	z1 = A / 100;
	x = A / 10;
	c2 = x % 10;
	v3 = A % 10;
	if (((z1 < c2) & (c2 < v3)) == true)
	{
		printf("\nCifri chisla obrazuyt vozrastayuchuyu posledovatelnost");
		
	}
	if (((z1 > c2) & (c2 > v3)) == true)
	{
		printf("\nCifri chisla obrazuyt ubivayuchuyu posledovatelnost");

	}
	else
	{
		printf("\nChislo ne podhodit");
	}
	return 0;
}
int Number_5()
{
	int A, z1, x2, c3, v4;
	printf("\n\nNomer 5\n\nVvedite chetirexznachnoe chislo:\n");
	scanf_s("\n%d", &A);
	z1 = A / 1000;
	x2 = (A / 100) % 10;
	c3 = (A / 10) % 10;
	v4 = A % 10;
	if (((z1 == v4) & (x2 == c3)) == true)
	{
		printf("\nChislo chitaetsya odinakovo");
	}
	else
	{
		printf("\nChislo ne podxodit");
	}
	return 0;
}
int Number_6()
{
	int A, B, C;
	printf("\n\nNomer 6\n\nVvedite tri chisla:\n");
	scanf_s("\n%d\n%d\n%d", &A, &B, &C);
	if (((A * A) == (B * B + C * C)) == true)
	{
		printf("\ntreugolnic pryamougolniy");
		return 0;
	}
	if (((B*B) == (A*A + C * C)) == true)
	{
		printf("\ntreugolnic pryamougolniy");
		return 0;
	}
	if (((C*C) == (B * B + A*A)) == true)
	{
		printf("\ntreugolnic pryamougolniy");
		return 0;
	}
	else
	{
		printf("\ntreugolnic nepryamougolniy");
		return 0;
	}
	return 0;
}
int Number_7()
{
	int A, B, C;
	printf("\n\nNomer 7\n\nVvedite tri chisla:\n");
	scanf_s("\n%d\n%d\n%d", &A, &B, &C);
	if ((((A+B)>C) & ((B+C)>A)& ((A + C) > B)) == true)
	{
		printf("\ntreugolnic sushestvuet");
		return 0;
	}
	else
	{
		printf("\ntreugolnic ne sushestvuet");
		return 0;
	}
	return 0;
}
int main()
{
	Number_1();
	Number_2();
	/*Number_3();
	Number_4();
	Number_5();
	Number_6();
	Number_7();
	return 0;
}*/