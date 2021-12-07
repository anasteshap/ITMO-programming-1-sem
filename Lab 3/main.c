#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a;

    printf("1.\nInput 16th number: ");
    scanf("%x", &num);
    printf("\n");

    printf("2.\nOutput 8th number: %o\n\n", num);

    printf("3.\nNum in 16th number << 2: %x << 2 == %x\n\n", num, num << 2);

    printf("4.\n~Num in 16th number: %x\n\n", ~num);

    printf("5.\nInput 16th number: ");
    scanf("%x", &a);
    printf("%x (16th) | %x (16th) = %x\n", a, num, a | num);

    return 0;
}