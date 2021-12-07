#include <stdio.h>
#include <string.h> // символьные строки
#include <stddef.h>

int main()
{
    char s1[100], s2[20];

    // задание 1
    printf("1) s1 = ");
    gets(s1); fflush(stdin);

    printf("   s2 = ");
    gets(s2); fflush(stdin);

    printf("   s1 + s1 = %s\n", strcat(s1, s2)); // s1 += s2; s2 = s2

    // задание 4
    int n;
    printf("4) Кол-во первых символов (для сравнения): ");
    scanf("%d", &n); fflush(stdin);

    if (strncmp(s1, s2, n) == 0)
        printf("   Первые %d симв. в s1 и s2 равны\n", n);
    else
        printf("   Первые %d симв. в s1 и s2 не равны\n   Разница: %d\n",
               n, strncmp(s1, s2, n));

    // задание 5
    printf("5) Копирование s2 в s1 => s1 = %s\n", strcpy(s1, s2));

    // задание 8
    char a;
    printf("8) Рассматриваемая строка: %s\n   Элемент: ", s1);
    gets(&a);

    if (strchr(s1,(int)a) != NULL)
        printf("   Элемент + оставшаяся строка = %s\n", strchr(s1,(int)a));
    else
        printf("   Адрес = %s\n", strchr(s1,(int)a));

    // задание 11
    char s3[100], s4[20];

    printf("11) Строка 1 = ");
    gets(s3); fflush(stdin);

    printf("    Строка 2 = ");
    gets(s4);

    // определение максимальной длины участка строки, содержащего только указанные символы
    printf("    Длина сегмента = %lu\n", strspn(s3, s4)); //int or size_t or unsigned long (+)
    return 0;
}
