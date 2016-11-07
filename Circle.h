#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Shape.h"
#include "Point2D.h"

typedef struct {
    Shape       super;
    Point2D     center;
    double      radius;
} Circle;

Circle *createCircle(void);

#endif /* CIRCLE_H_INCLUDED */
