#include <stdio.h>
#include <math.h>
int Number_1()
{
    printf("Number 1\n");
    int A, B, a;
    printf("Vvedite znacheniya À è Â\n");
    scanf_s("%d%d", &A, &B);
    a = A;
    A = B;
    B = a;
    printf("\nPomeniyaem mestami À è Â : \n");
    printf("\nTeper À = %d\n", A);
    printf("\nTeper Â = %d\n", B);
    return 0;
}


int Number_2()
{
    printf("Number_2\n");
    int A, B, C, a, b;
    printf("Vvedite znacheniya À , Â è Ñ :\n");
    scanf_s("%d%d%d", &A, &B, &C);
    printf("\nPeremestim znacheniya mejdu À è Â , B è Ñ , Ñ è À  : \n");
    a = A;
    b = B;
    A = C;
    B = A;
    C = b;
    printf("Teper:\n A = %d\n B = %d\n C = %d", A, B, C);
    return 0;
}

int Number_3()
{
    printf("\nNumber_3\n");
    int A, B, C, a, b;
    printf("Vvedite znacheniya À , Â è Ñ :\n");
    scanf_s("%d%d%d", &A, &B, &C);
    printf("\nPeremestim znacheniya mejdu À è Â , B è Ñ , Ñ è À  : \n");
    a = A;
    b = B;
    A = b;
    B = C;
    C = a;
    printf("Teper:\n A = %d\n B = %d\n C = %d", A, B, C);
    return 0;
}


int Number_4()
{
    printf("\nNumber_4\n");
    float x,y;
    printf("\nVvedite peremennyiu 'x'\n");
    scanf_s("\n%f", &x);
    printf("\nNaidem znachenie funkcii : 3*x^6 - 6*x^2 - 7");
    y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    printf("\nOtvet: %f",y);
    return 0;
}

int Number_5()
{
    printf("\nNumber_5\n");
    float x, y;
    printf("\nVvedite peremennyiu 'x'\n");
    scanf_s("\n%f", &x);
    printf("\nNaidem znachenie funkcii : 4*(x-3)^6 - 7*()x-3^3 + 2");
    y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    printf("\nOtvet: %f", y);
    return 0;
}

int Number_6()
{
    printf("\nNumber_6\n");
    float A, y;
    printf("\nVvedite chislo A:\n");
    scanf_s("%f", &A);
    y = A * A;
    A = y * y;
    y = A * A;
    printf("Vozvedem 'A' v stepen 8 : \nOtvet: %f", y);
    return 0;
}


int Number_7()
{
    printf("\nNumber_7\n");
    float A, y, x;
    printf("Vvedite chislo A:\n");
    scanf_s("%f", &A);
    x = A * A * A;
    y = x * x;
    A = y * y * x;
    printf("Vozvedem 'A' v stepen 15 : \nOtvet: %f", A);
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
    Number_7();
    return 0;
}
