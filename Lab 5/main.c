#include <stdio.h>

void matrix_in(int num[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            scanf("%d", &num[i][j]);
    }
    printf("\n");
}

void matrix_out(int num_1[2][2], int num_2[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%d ", num_1[i][j]);

        if (i == 1)
            printf("  *   ");
        else printf("      ");

        for (int j = 0; j < 2; j++)
            printf("%d ", num_2[i][j]);

        printf("\n");
    }
}

void multiplies_matrix(int num_1[2][2], int num_2[2][2])
{
    int num_3[2][2] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
                num_3[i][j] += num_1[i][k]*num_2[k][j];
            printf("%d ", num_3[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[] = {77, 12, 74, 34, 56, 78, 234, 678};

    printf("1.\n");
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
        printf("%d\n", arr[i]);

    printf("\n2.\n");
    int arr_1[2][2], arr_2[2][2];

    matrix_in(arr_1);
    matrix_in(arr_2);

    matrix_out(arr_1, arr_2);
    printf("\nResult:\n");

    multiplies_matrix(arr_1, arr_2);

    return 0;
}
