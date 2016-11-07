#include <stdlib.h>
#include "Shape.h"

typedef enum {
    DRAW_INDEX = 0
} MethodTableIndex;

void drawShape(Shape *shape)
{
    shape->super.classDescriptor->methodTable[(int)DRAW_INDEX]();
}
