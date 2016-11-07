#ifndef POLYLINE_H_INCLUDED
#define POLYLINE_H_INCLUDED

#include "Shape.h"
#include "Point2D.h"

typedef struct {
    Shape       super;
    int         nPoints;
    Point2D     *point;
} Polyline;

Polyline *createPolyline(void);

#endif /* POLYLINE_H_INCLUDED */
