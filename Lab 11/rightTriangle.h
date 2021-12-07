#ifndef _11_RIGHTTRIANGLE_H
#define _11_RIGHTTRIANGLE_H

struct point {
    double x, y;
};

struct rightTriangle {
    struct point A;
    struct point B;
    struct point C;
};

double rightTriangle_perimeter(struct rightTriangle rTriangle);
double rightTriangle_area(struct rightTriangle rTriangle);

#endif //_11_RIGHTTRIANGLE_H
