#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

#include "Object.h"

typedef enum {
    BLACK,
    BLUE,
    RED,
    MAGENTA,
    GREEN,
    CYAN,
    YELLOW,
    WHITE
} ColorCode;

typedef enum {
    SOLID_LINE,
    DOTTED_LINE,
    BLOKEN_LINE,
} LineType;

typedef struct {
    Object      super;
    ColorCode   color;
    LineType    lineType;
} Shape;

void drawShape(Shape *shape);

#endif /* SHAPE_H_INCLUDED */
