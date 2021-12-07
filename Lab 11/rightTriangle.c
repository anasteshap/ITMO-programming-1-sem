#include <math.h>
#include "rightTriangle.h"

double rightTriangle_perimeter(struct rightTriangle rTriangle) {
    double perimeter = 0;

    // первая сторона
    perimeter += pow (pow (rTriangle.A.x - rTriangle.B.x , 2) + pow (rTriangle.A.y - rTriangle.B.y , 2), 0.5);
    // вторая сторона
    perimeter += pow (pow (rTriangle.B.x - rTriangle.C.x , 2) + pow (rTriangle.B.y - rTriangle.C.y , 2), 0.5);
    // третья сторона
    perimeter += pow (pow (rTriangle.C.x - rTriangle.A.x , 2) + pow (rTriangle.C.y - rTriangle.A.y , 2), 0.5);

    return perimeter;
}

double rightTriangle_area(struct rightTriangle rTriangle) {
    return 0.5 * fabs((rTriangle.B.x - rTriangle.A.x) * (rTriangle.C.y - rTriangle.A.y) -
            (rTriangle.C.x - rTriangle.A.x) * (rTriangle.B.y - rTriangle.A.y));
}

