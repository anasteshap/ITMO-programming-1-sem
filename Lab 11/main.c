#include <stdio.h>
#include "rightTriangle.h"

int main() {

    struct rightTriangle rTriangle;
    printf("Coordinates of A: ");
    scanf("%lf %lf", &rTriangle.A.x, &rTriangle.A.y);
    printf("Coordinates of B: ");
    scanf("%lf %lf", &rTriangle.B.x, &rTriangle.B.y);
    printf("Coordinates of C: ");
    scanf("%lf %lf", &rTriangle.C.x, &rTriangle.C.y);

    printf("\nPerimeter: %.2lf\nArea: %.2lf\n",
           rightTriangle_perimeter(rTriangle), rightTriangle_area(rTriangle));

    return 0;
}
