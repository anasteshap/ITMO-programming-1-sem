#include <stdio.h>
#include <stdlib.h>

int len_of_n(int n)
{
    int len;
    for (len = 0; n > 0; n /= 10, len++);
    return len;
}

char* divide_n(int n, int* arr_size)
{
    char* dijit = (char*)malloc(len_of_n(n) * sizeof(char));
    int count = 0;

    while (n > 0) {
        dijit[count]  = n % 10;
        count++;
        n /= 10;
    }
    *arr_size = count; // *arr_size = len_of_n(n)

    return dijit;
}



void delete_symbol(char* p) {
    for (int i = 0; p[i] != '\0'; i++) {
        p[i] = p[i + 1];
    }
}

void delete_spaces(char* str) {
    while (*str != '\0') {
        if (*str == ' ' && *(str + 1) == ' ') {
            delete_symbol(str + 1);
            delete_spaces(str);
            return;
        }
        else if ((*str == '(' || *str == '[' || *str == '{' || *str == '"') && *(str + 1) == ' ') {
            delete_symbol(str + 1);
            delete_spaces(str);
            return;
        }
        str++;
    }
}

int main() {
    // 3 задание
    int n, size;
    printf("3. ");
    scanf("%d", &n);
    fflush(stdin);

    char* array = divide_n(n, &size);

    for (int i = size - 1; i >= 0; i--) {
        printf("Digit on %d place: %d\n", size - i,  array[i]);
    }


    // 5 задание
    printf("5. \n");

    char str[1000];
    gets(str);
    delete_spaces(str);
    printf("%s\n", str);

    return 0;
}
