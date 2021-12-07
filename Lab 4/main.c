#include <stdio.h>
#define MIN -77
#define MAX -1

int main()
{
    int num, x;

    printf("1.\n");
    scanf("%d", &num);

    printf("Range [%d..%d] - %s\n", MIN, MAX, (MIN <= num && num <= MAX) ? "Yes" : "No");

    printf("2.\n");
    scanf("%d", &num);

    printf("%d\n", num & (1u << 18));

    return 0;
}
