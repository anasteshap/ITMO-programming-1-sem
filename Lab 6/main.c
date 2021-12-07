#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* point;
    int arr[4];
    point = &arr[0];

    printf("1. 4 elements\n");
    for (int i = 0; i < 4; i++)
        scanf("%d", &arr[i]);

    printf("Array:\n");
    for (int i = 0; i < 4; i++)
        printf("%d\n", *(point + i));
    printf("\n");

    int len;
    int* buf;

    printf("2. Length of array: ");
    scanf("%d", &len);

    buf = (int*) malloc(len);

    for (int i = 0; i < len; i++)
    {
        buf[i] = 1000 + i;
        if (i == 0)
            printf("Array:\n");
        printf("%d\n", *(buf + i));
    }

    free (buf);
    return 0;
}
