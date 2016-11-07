#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Shape.h"
#include "Point2D.h"

typedef struct {
    Shape       super;
    Point2D     point1;
    Point2D     point2;
} Rectangle;

Rectangle *createRectangle(void);

#endif /* RECTANGLE_H_INCLUDED */
