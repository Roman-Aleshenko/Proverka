/*#include <stdio.h>
int Number_1()
{
    printf("Nomer 1:\n");
    printf(" \n");
    int a, b;
    printf("Vvedite pervoe chislo:");
    scanf_s("%d", &a);
    printf("Vvedite vtoroe chislo:");
    scanf_s("%d", &b);
    int sum = a + b;
    printf("\nNaidem summu vvedennih chisel:");
    printf("\n%d + %d = ", a, b);
    printf("%d", sum);
    return 0;
}

int Number_2()
{
    printf("\nNomer 2:\n");
    printf(" \n");
    printf("\nVvedite chislo, kotoroe bolshe ili ravno 5:");
    int k;
    scanf_s("%i", &k);
    printf("Vs vveli chislo %d", k);
    if (k >= 5)
    {
        int k1 = k - 3;
        printf("\n%d-3 = ", k);
        printf("%d", k1);
    }
    else
    {
        printf("\nVi vveli chislo menshe 5:");
        printf("\n%d<5", k);
    }
    return 0;
}

int Number_3()
{
    printf("\nNomer3:\n");
    printf(" \n");
    printf("\nVvedite chislo : \n");
    int a;
    scanf_s("%d", &a);
    int b = 5;
    int sum = 0;
    while (sum < 44)
    {
        printf("Vvedite chislo bolshe\n");
        scanf_s("\n%d", &a);
        sum = a + b;
    }
    printf("Konec");
    return 0;
}






int main()
{
    Number_1();
    Number_2();
    Number_3();
}
*/