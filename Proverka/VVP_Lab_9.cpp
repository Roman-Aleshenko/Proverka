#include <stdio.h>
#include <math.h>
int Number_1()
{
	int a;
	printf("Nomer 1\n\nVvedite kolichestvo sekund:");
	scanf_s("%d", &a);
	a = a % 60;
	printf("\n\nKol-vo sekund, kotoroe proshlo s nachala poslednei minuty = %d", a);
	return 0;
}

int Number_2()
{
	int K;
	printf("Nomer 2\n\nVvedite 'K', gde K odin iz dney v godu i 0<K<366:");
	scanf_s("%d", &K);
	K = K % 7;
	printf("\n\n Nomer dnya nedeli = %d", K);
	return 0;
}

int Number_3()
{
	int N,K;
	printf("Nomer 3\n\nVvedite 'K', gde K odin iz dney v godu i 0<K<366:");
	scanf_s("%d", &K);
	printf("\nVvedite 'N', gde N odin iz dney nedeli 0<N<8:");
	scanf_s("%d", &N);
	K = (K+(N-1))% 7;
	printf("\n\n Nomer dnya nedeli =%d", K);
	return 0;
}

int Number_4()
{
	int A,B,C,S,x,len;
	printf("Nomer 4\n\nVvelite 3 chisla:\n");
	scanf_s("%d\n%d\n%d", &A, &B, &C);
	S = A * B;
	len = S / pow(C, 2);
	x = S - (len * (pow(C, 2)));
	printf("\n\nKolichestvo kvadratov , razmeshennix v pryamougolnike = %d\n",len);
	printf("\nOstavshyayasya ploshad = %d\n",x);
	return 0;
}

int Number_5()
{
	int a,x;
	printf("Nomer 5\n\nVvelite god:");
	scanf_s("\n%d", &a);
	x = (a / 100) + 1;
	printf("%d god eto %d stoletie.", a, x);
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