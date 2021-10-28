/*#include <stdio.h>
#include <math.h>




int Number_1()
{
	printf("Number_1\n");
	float a, pi, b;
	pi = 180;
	printf("Vvedite znachenie ugla v gradusax\n");
	scanf_s("%f", &a);
	printf("\nPerevedem gradusi v radiani, ychitivaya chto 1 radian = 180*");
	b = a / pi;
	printf("\nResultat: %f radian", b);
	return 0;
}



int Number_2()
{
	printf("Number_2\n");
	float a, pi, b;
	pi = 180;
	printf("Vvedite znachenie ugla v radianax ot 0 do 2\n");
	scanf_s("%f", &a);
	printf("\nPerevedem gradusi v radiani, ychitivaya chto 1 radian = 180*");
	b = a * pi;
	printf("\nResultat: %f radian", b);
	return 0;
}


int Number_3()
{
	printf("\n\nNumber_3\n");
	float x, A, Y, b ,c;
	printf("\nVvedite kolichestvo kilogramm konfet:\n");
	scanf_s("%f", &x);
	printf("Vvedite summu, kotoruy vi zaplatili za konfeti: \n");
	scanf_s("%f", &A);
	b = A / x;
	printf("1 Kilogramm konfet stoit: %f", b);
	printf("\n\nUkajite , skolko kilogrammov konfet vam nujno kupit :\n");
	scanf_s("%f", &Y);
	c = b * Y;
	printf("Vi zaplatite : %f", c);
	return 0;
}

int Number_4()
{
	printf("Number_4_v raznie storoni\n\n");
	float V1, V2, S, T, s, alf, v1_s, v2_s;
	printf("Vvedite skorost pervogo i vtorogo avtomobiley:\n");
	scanf_s("%f\n%f", &V1, &V2);
	printf("\n\nVvedite iznachalnoe rasstoyanie mejdu avtomobilyami:\n");
	scanf_s("%f", &s);
	printf("\n\nVvedite vremya , cheres kotoroe proizvedutsya zameri rasstoyaniya:\n");
	scanf_s("%f", &T);
	printf("\n\nVvedite ugol , pod kotorim razezjayutsya avtomobili: \n");
	scanf_s("%f", &alf);
	v1_s = V1 * T;
	v2_s = V2 * T;
	S = sqrt((pow(v1_s, 2) + pow(v2_s, 2)) - 2 * v1_s * v2_s * cos(alf));
	printf("\n\nRasstoyanie mejdu avtomopilami = %f", S);
	return 0;
}


int Number_5()
{
	printf("Number_5\n\n");
	float A, B, x;
	printf("Vvedite znacheniya peremennix A, B, prichem A != 0: \n");
	scanf_s("%f\n%f", &A, &B);
	printf("\n\nNaidem koren virajeniya : A*x + B = 0\n");
	x = -B / A;
	printf("x = %f",x);
	return 0;
}

int Number_6()
{
	printf("Number_6\n\n");
	float A1, A2, B1, B2, C1, C2, Delta, Delta_x, Delta_y, x, y;
	printf("Vvediteznacheniya sistemi neravenstv:\n");
	scanf_s("%f\n%f\n%f\n%f\n%f\n%f", &A1,&B1,&C1,&A2,&B2,&C2);
	Delta = A1 * B2 - A2 * B1;
	Delta_x = C1 * B2 - C2 * B1;
	Delta_y = A1 * C2 - A2 * C1;
	x = Delta_x / Delta;
	y = Delta_y / Delta;
	printf("\n\nX = %f\nY = %f",x,y);
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
*/