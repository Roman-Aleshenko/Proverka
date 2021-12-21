#include <stdio.h>
int Number_1()
{
	
	float arr[6];
	int K, L;
	scanf_s("%d", &K);
	scanf_s("%d", &L);
	for (int i = 0; i < 6; i++)
	{
		scanf_s("%f", &arr[i]);
	}
	float sum = 0;
	for (int a = K; a < L + 1; a++)
	{
		sum += arr[a];
	}
	int b = L + 1 - K;
	float sr_znach = sum / b;
	printf("%f", sr_znach);
	return 0;
}
int Number_2()
{
	int d = 0, arr[7];
	for (int i = 0; i < 7; i++)
	{
		scanf_s("%d", &arr[i]);
		d = arr[1] - arr[0];
	}
	int chetchik = 0;
	for (int i = 0; i < 7-1; i++)
	{
		if ((arr[i + 1] - arr[i]) == d)
		{
			chetchik += 1;
		}
		else
		{
			chetchik = 0;
		}
	}
	if (chetchik != 0)
	{
		printf("%d", d);
	}
	else
	{
		printf("0");
	}
	return 0;
}
int Number_3()
{
	int arr[8];
	int  b, min = 10000000;
	for (int i = 0; i < 8; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int a = 0; a < 8; a++)
	{
		if (a % 2 == 0)
		{
			b = arr[a];
			if (b <= min)
			{
				min = b;
			}
			else
			{
				min = min;
			}
		}	
	}
	printf("%d", min);
	return 0;
}
int Number_4()
{

	int arr[8];
	int  b, max = 0;
	for (int i = 0; i < 8; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (int a = 0; a < 8; a++)
	{
		if ((arr[a+1]>arr[a])&(arr[a+1]>arr[a+2]))
		{
			b = arr[a + 1];
			if (b > max)
			{
				max = b;
			}
			else
			{
				max = max;
			}
		}
	}
	printf("%d", max);
	return 0;
}
int Number_5()
{
	int arr[1000];
	int N, i, i2;
	printf("N:");
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("\n%d:", i);
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0,t=0;t!=1; i++)
	{
		for (int a = 0; a < N; a++)
		{
			if (i != a)
			{
				if (arr[i] == arr[a])
				{
					printf("\n%d %d", i, a);
					t = 1;
				}

			}
		}
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
	return 0;
}