/*#include <stdio.h>//Вызов библиотеки ввода/вывода
int main() //Точка входа в программу
{
    int i, j, x;
    int array[] = { 1, 4, 6, 7, 8, 3 };
    int n = sizeof(array) / sizeof(int);
    for (i = 1; i < n; i++)
    {
        for (j = i, x = array[i]; (j > 0) && (array[j - 1] > x); j--)
        {
            array[j] = array[j - 1];
        }
        array[j] = x;
    }
    for (int c = 0; c <= n - 1; c++)
    {
        printf("%d", array[c]);
    }
    return 0;
}*/
