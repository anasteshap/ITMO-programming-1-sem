#include <stdio.h>
#include <math.h>

int main()
{
    double a, z_1, z_2;

    scanf("%lf", &a);

    z_1 = ((a + 2) / sqrt(2 * a) - a / (sqrt(2 * a) + 2) + 2 / (a - sqrt(2 * a))) * (sqrt(a) - sqrt(2) / (a + 2));
    z_2 = 1/(sqrt(a) + sqrt(2));
    printf("%f\n", z_1);
    printf("%f\n", z_2);

    return 0;
}
