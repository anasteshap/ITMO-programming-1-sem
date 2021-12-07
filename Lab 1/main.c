#include <stdio.h>

int main()
{
    int num;
    char line[100];

    scanf("%d", &num); // считывание числа
    fflush(stdin); // обнуление буфера
    printf("%d\n", num); // вывод числа

    gets(line); // считывание строки
    puts(line);

    return 0;
}
