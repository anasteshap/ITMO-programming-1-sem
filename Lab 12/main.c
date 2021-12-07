#include <stdio.h>
#include <stdlib.h> // для exit(0)

int main()
{
    FILE *f1,*f2,*f3;
    char ch;

    f1 = fopen("in1.txt", "r");
    if (f1 == NULL) // открылся ли 1 файл
    {
        printf("Cannot open file 1!");
        exit(0); // выход из программы
    }

    f2 = fopen("in2.txt", "r");
    if (f2 == NULL) // открылся ли 2 файл
    {
        printf("Cannot open file 2!");
        exit(0);
    }

    f3 = fopen("out.txt", "w");
    if (f3 == NULL) // открылся ли файл "out.txt"
    {
        printf("Fail!");
        fclose(f1);
        fclose(f2);
        exit(0);
    }

    while(1) { // бесконечный цикл (break == выход из цикла)
        ch = getc(f1);
        if (ch == EOF)
            break;
        else
            putc(ch, f3);
    }

    while(1) {
        ch = getc(f2);
        if (ch == EOF)
            break;
        else
            putc(ch, f3);
    }

    printf("File copied successfully!");

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
