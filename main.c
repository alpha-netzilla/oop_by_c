#include <stdio.h>
#include "Shape.h"
#include "Polyline.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void)
{
    Shape       *shapes[3];
    int         i;

    shapes[0] = (Shape*)createPolyline();
    shapes[1] = (Shape*)createCircle();
    shapes[2] = (Shape*)createRectangle();

    /* method override */
    for (i = 0; i < 3; i++) {
        drawShape(shapes[i]);
    }

    return 0;
}
