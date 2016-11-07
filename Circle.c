#include <stdio.h>
#include <stdlib.h>
#include "Circle.h"

static void drawCircle(void);

static void (*methodTable[])() = {
    drawCircle,
};

static ClassDescriptor circleClassDescriptor = {
    methodTable,
};

Circle *createCircle(void)
{
    Circle *c = malloc(sizeof(Circle));

    c->super.super.classDescriptor = &circleClassDescriptor;
    c->center.x = 0.0;
    c->center.y = 0.0;
    c->radius = 0.0;

    return c;
}

static void drawCircle(void)
{
    fprintf(stderr, "Circle\n");
}
