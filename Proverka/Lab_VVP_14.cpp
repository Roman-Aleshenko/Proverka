#include <iostream>
using namespace std;

int Number_1()
{
	int A, B,i=1,a;
	cin >> A >> B;
	for (i=A; i<B+1; i++)
	{
		for (a = 1; a < i+1; a++)
		{
			cout << i;
		}
		
	}
	return 0;
}

int Number_2()
{
	int A, B,x,c=0,a;
	cin >> A >> B;
	for (x=B; x <= A; x+=B)
	{
		c += B;
	}
	a = A - c;
	cout << a ;
	return 0;
}

int Number_3()
{
	int N, k = 0, sum = 0;
	cin >> N;
	if (N > 1)
	{
		while (sum < N)
		{
			k++;
			sum += k;
		}
		cout << "Summa = " << sum << "\n" << "k = " << k;
	}
	else 
	{
		cout << 0;
	}
	return 0;
}
int Number_4()
{
	float nachalniy_vklad = 1000,mesyac = 0;
	float P,i=0.01;
	cout << "Vveddite procent"<<"\n";
	cin >> P;
	P = 1+(P * i);
	while (nachalniy_vklad < 1100)
	{
		nachalniy_vklad*=P;
		mesyac++;
	}
	cout  << mesyac<<"\n" << nachalniy_vklad;
	return 0;
}
int Number_5()
{
	int A, B, c;
	cin >> A >> B;
	while (A != B)
	{
		if (A > B)
		{
			A -= B;
		}
		if (B > A)
		{
			B -= A;
		}
	}
	cout << "NOD=" << B;
	return 0;
}
	
int fibonachi(int N) 
{
	int a = 0;
	int b = 1;
	int c = 1;
	int d = 0;
	while (d <= N) {
		b = a;
		a += c;
		c = b;
		d++;
		if (N == a)
			return d;
	}
	if (N == 0)
		return 0;
	else return -1;
}
int Number_6()
{
	int N;
	cin >> N;
	cout << fibonachi(N);
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
