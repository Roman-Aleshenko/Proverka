#include <stdio.h>
#include <math.h>

int Number_1()
{
	printf("Nomer 1:\n");
	int x1, y1, x2, y2, d;
	printf("Vvedite koordinatu x1\n");
	scanf_s("%d", &x1);
	printf("Vvedite koordinatu y1\n");
	scanf_s("%d", &y1);
	printf("Vvedite koordinatu x2\n");
	scanf_s("%d", &x2);
	printf("Vvedite koordinatu y2\n");
	scanf_s("%d", &y2);
	d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("Dlina = %d", d);
	return 0;
}


int Number_2()
{
	printf("\n\nNomer 2:\n");
	int Ax, Ay, Bx, By, Cx, Cy, dAC, dBC, sum;
	printf("Vvedite koordinatu Ax\n");
	scanf_s("%d", &Ax);
	printf("Vvedite koordinatu Ay\n");
	scanf_s("%d", &Ay);
	printf("Vvedite koordinatu Bx\n");
	scanf_s("%d", &Bx);
	printf("Vvedite koordinatu By\n");
	scanf_s("%d", &By);
	printf("Vvedite koordinatu Cx\n");
	scanf_s("%d", &Cx);
	printf("Vvedite koordinatu Cy\n");
	scanf_s("%d", &Cy);
	dAC = sqrt(pow((Cx - Ax), 2) + pow((Cy - Ay), 2));
	dBC = sqrt(pow((Cx - Bx), 2) + pow((Cy - By), 2));
	sum = dAC + dBC;
	printf("\nDlina AC = %d", dAC);
	printf("\nDlina BC = %d", dBC);
	printf("\nSumma dlin = %d", sum);
	return 0;
}

int Number_3()
{
	printf("\n\nNomer 3:\n");
	int Ax, Ay, Bx, By, Cx, Cy, dAC, dCB, proizv;
	printf("Vvedite koordinatu Ax\n");
	scanf_s("%d", &Ax);
	printf("Vvedite koordinatu Ay\n");
	scanf_s("%d", &Ay);
	printf("Vvedite koordinatu Bx\n");
	scanf_s("%d", &Bx);
	printf("Vvedite koordinatu By\n");
	scanf_s("%d", &By);
	printf("Vvedite koordinatu Cx\n");
	scanf_s("%d", &Cx);
	printf("Vvedite koordinatu Cy\n");
	scanf_s("%d", &Cy);
	dAC = sqrt(pow((Cx - Ax), 2) + pow((Cy - Ay), 2));
	dCB = sqrt(pow((Bx - Cx), 2) + pow((By - Cy), 2));
	proizv = dAC * dCB;
	printf("\nDlina AC = %d", dAC);
	printf("\nDlina BC = %d", dCB);
	printf("\nProizvedenie dlin = %d", proizv);
	return 0;
}

int Number_4()
{
	printf("\n\nNomer 3:\n");
	int Ax, Ay, Bx, By, cx, cy, dx, dy, per, plos, dAD, dAC;
	printf("Vvedite koordinatu Ax\n");
	scanf_s("%d", &Ax);
	printf("Vvedite koordinatu Ay\n");
	scanf_s("%d", &Ay);
	printf("Vvedite koordinatu Bx\n");
	scanf_s("%d", &Bx);
	printf("Vvedite koordinatu By\n");
	scanf_s("%d", &By);
	dx = Bx;
	dy = Ay;
	cx = Ax;
	cy = By;
	dAD = sqrt(pow((Bx - Ax), 2) + pow((Ay - Ay), 2));
	dAC = sqrt(pow((Ax - Ax), 2) + pow((By - Ay), 2));
	plos = dAC * dAD;
	printf("\nPloshad = %d", plos);
	per = (2 * dAC) + (2 * dAD);
	printf("\nPerimetr = %d", per);
	return 0;
}

int Number_5()
{
	printf("\n\nNomer 5:\n");
	int Ax, Bx, Cx, Ay, By, Cy, s, a, b, c, p, P;
	printf("Vvedite koordinatu Ax\n");
	scanf_s("%i", &Ax);
	printf("Vvedite koordinatu Ay\n");
	scanf_s("%i", &Ay);
	printf("Vvedite koordinatu Bx\n");
	scanf_s("%i", &Bx);
	printf("Vvedite koordinatu By\n");
	scanf_s("%i", &By);
	printf("Vvedite koordinatu Cx\n");
	scanf_s("%i", &Cx);
	printf("Vvedite koordinatu Cy\n");
	scanf_s("%i", &Cy);
	a = sqrt(pow((Bx - Ax), 2) + pow((By - Ay), 2));
	b = sqrt(pow((Cx - Bx), 2) + pow((Cy - By), 2));
	c = sqrt(pow((Cx - Ax), 2) + pow((Cy - Ay), 2));
	P = a + b + c;
	p = (a + b + c)/2;
	s = sqrt((p * (p - a) * (p - b) * (p - c), 2));
	printf("\nPloshad = %d", s);
	printf("\nPerimetr = %d", P);
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