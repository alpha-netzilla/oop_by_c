#include <stdio.h>
#include <stdlib.h>
#include "Rectangle.h"

static void drawRectangle(void);

static void (*methodTable[])() = {
    drawRectangle,
};

static ClassDescriptor rectangleClassDescriptor = {
    methodTable,
};

Rectangle *createRectangle(void)
{
    Rectangle *r = malloc(sizeof(Rectangle));

    r->super.super.classDescriptor = &rectangleClassDescriptor;
    r->point1.x = 0.0;
    r->point1.y = 0.0;
    r->point2.x = 0.0;
    r->point2.y = 0.0;

    return r;
}

static void drawRectangle(void)
{
    fprintf(stderr, "Rectangle\n");
}
